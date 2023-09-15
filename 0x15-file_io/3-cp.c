#include	"main.h"

/**
 * create_buff - function allocates a space for buffer
 * @file_to: pointer to the name of file to
 * Return: pointer to ther buffer
 */
char	*create_buff(char *file_to)
{
	char	*buff;

	buff = malloc(1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (buff);
}

/**
 * close_fd - function closes the fds
 * @buff: pointer to the buffer
 * @fd_to: to file descriptor
 * @fd_from: from file discriptor
 */

void	close_fd(char *buff, int fd_to, int fd_from)
{
	int	tmp;

	tmp = close(fd_from);
	if (tmp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		free(buff);
		exit(100);
	}
	tmp = close(fd_to);
	if (tmp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		free(buff);
		exit(100);
	}
}

/**
 * _strlen - function counts chars from string
 * @str: the string to be counted
 * Return: the size of the string
 */

int	_strlen(char  *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * main - program that copies the content of a file to another file
 * @ac: arg count
 * @av: args
 * Return: 0
 */

int	main(int ac, char **av)
{
	char *buff, *file_to, *file_from;
	int	fd_from, fd_to, tmp, byte_readed;


	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDWR);
	buff = create_buff(file_to);
	byte_readed = read(fd_from, buff, 1024);
	if (fd_from == -1 || byte_readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(buff);
		close(fd_from);
		exit(98);
	}
	buff[byte_readed] = '\0';
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	tmp = write(fd_to, buff, _strlen(buff));
	if (tmp == -1 || fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(buff);
		close_fd(buff, fd_to, fd_from);
		exit(99);
	}
	close_fd(buff, fd_to, fd_from);
	free(buff);
	return (0);
}
