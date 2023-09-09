#include	"main.h"

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
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDWR);
	read(fd_from, buff, 1024);
	fd_to = open(file_to, O_RDWR);
	return (0);
}
