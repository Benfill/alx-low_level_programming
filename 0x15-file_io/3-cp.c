#include	"main.h"

/**
 * main - program that copies the content of a file to another file
 */

int	main(int ac, char **av)
{
	char *buff[1024], *file_to, *file_from;
	int	fd_from, fd_to;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	file_from = *av[1];
	file_to = *av[2];
	fd_to = open();
}
