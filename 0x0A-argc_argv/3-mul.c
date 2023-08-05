#include	"main.h"

/**
 * print_number - function prints an integer
 * @n: the number to be printed
 * Return: void
 */

void	print_number(long n)
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

int	_atoi(char *s)
{
	int	i;
	int	sum;
	int	digit;
	int	sign;

	i =		0;
	sum =		0;
	sign =		1;
	while (s[i] == '-' || s[i] == '+' || s[i] == ' ')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			sign = 1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - 48;
			sum = sum * 10 + digit;
			i++;
		}
		if (sum > 0)
			break;
		i++;
	}
	return (sum * sign);
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
	long	res = 0;

	if (argc != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	nbr1 = _atoi(argv[1]);
	nbr2 = _atoi(argv[2]);
	res = nbr1 * nbr2;
	print_number(res);
	putchar('\n');
	return (0);
}
