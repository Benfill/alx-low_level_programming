#include	"main.h"

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


int	main(int argc, char **argv)
{
	int	cents;
	int	change[] = {25, 10, 5, 2, 1, 0};
	int	min;
	int	i;

	min	=	0;
	i	=	0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	cents = _atoi(argv[1]);
	if (cents == -33)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (cents != 0)
	{
		if (cents != 0)
		{
			for (i = 0; change[i] != 0; i++)
			{
				if (cents / change[i] >= 1)
				{
					min += cents / change[i];
					cents %= change[i];
					break;
				}
			}
		}
	}
	print_number(min);
	putchar('\n');
	return (0);
}






