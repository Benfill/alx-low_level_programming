#include	"main.h"

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string
 * Return: the length of s
 */

int	_strlen(char *s)
{
	int	i = 0;

	while (s[i])
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
	int	fd_from, fd_to;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDWR);
	read(fd_from, buff, 1024);
	buff[_strlen(buff) + 1] = '\0';
	fd_to = open(file_to, O_RDWR);
	return (0);
}
