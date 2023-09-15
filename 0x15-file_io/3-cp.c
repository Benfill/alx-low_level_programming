#include	"main.h"

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
	char buff[1024], *file_to, *file_from;
	int	fd_from, fd_to, tmp;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDWR);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	read(fd_from, buff, 1024);
	buff[_strlen(buff) + 1] = '\0';
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	tmp = write(fd_to, buff, _strlen(buff));
	if (tmp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	tmp = close(fd_from);
	if (tmp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	tmp = close(fd_to);
	if (tmp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
