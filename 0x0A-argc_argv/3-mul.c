#include	"main.h"

/**
 * print_number - function prints an integer
 * @n: the number to be printed
 * Return: void
 */

void	print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		print_number(-n);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else
		putchar(48 + n);
}

/**
 * main - program multiplies two numbers
 * @argc: the number of args
 * @argv: array of arguments
 * Return: 0 and 1 if there less or more than 3 args
 */

int	main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;
	int	res = 0;

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	nbr1 = *argv[1] - 48;
	nbr2 = *argv[2] - 48;
	res = nbr1 * nbr2;
	print_number(res);
	putchar('\n');
	return (0);
}
