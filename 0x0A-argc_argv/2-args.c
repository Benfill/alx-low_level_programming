#include	"main.h"

/**
 * _puts - function that prints a string
 * @str: the string
 * Return: void
 */

void	_puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

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
		_puts(argv[i]);
		i++;
	}
	return (0);
}
