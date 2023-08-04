#include	"main.h"

/**
 * main - program prints all args it receives
 * @argc: number of args
 * @argv: arguments
 * Return: 0
 */

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i =	0;
	j =	0;
	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}
	return (0);
}
