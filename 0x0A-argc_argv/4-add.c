#include    "main.h"

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
 * _atoi - function converts ascii to integer
 * @s: the pointer of string
 * Return: the converted integer
 */

int     _atoi(char *s)
{
	int	i;
	int	sum;
	int	digit;

	i =	0;
	sum =	0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - 48;
			sum = sum * 10 + digit;
			i++;
		}
		else
			return (-33);
	}
	return (sum);
}

/**
 * main - program adds positive numbers
 * @argc: the number of args
 * @argv: array of arguments
 * Return: 0 and 1 if there less or more than 3 args
 */

int     main(int argc, char **argv)
{
	int nbr, res, i;

	res = 0;
	i = 1;
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i < argc)
	{
		nbr = _atoi(argv[i]);
		if (nbr == -33)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		res += nbr;
		i++;
	}
	print_number(res);
	putchar('\n');
	return (0);
}
