#include	"main.h"

/**
 * main - program prints its name
 * @argc: argument count
 * @argv: array of character pointers listing all the arguments
 * Return: 0
 */

int	main(int argc, char **argv)
{
	int	i;

	i =	0;
	if (argc >= 0)
	{
		while (argv[0][i])
		{
			putchar(argv[0][i]);
			i++;
		}
		putchar('\n');
	}
	return (0);
}
