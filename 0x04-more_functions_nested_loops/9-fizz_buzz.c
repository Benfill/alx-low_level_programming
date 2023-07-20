#include	<unistd.h>
#include	<stdio.h>

/**
 * main - FizzBuzz program
 * Return: 0
 */

int	main(void)
{
	int	nbr;

	nbr =	1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0 && nbr % 5 == 0)
			printf("FizzBuzz");
		else if (nbr % 3 == 0)
			printf("Fizz");
		else if (nbr % 5 == 0)
			printf("Buzz");
		else
			printf("%d", nbr);
		if (nbr != 100)
			putchar(' ');
		nbr++;
	}
	putchar('\n');
	return (0);
}
