#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - printing the last digit
 * Return:0
 */
int main(void)
{
	int n;
	int	d;
	int	sign;
	char	lDigi[1];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sign = 1;
	d = n;
	if (n < 0)
	{
		sign = -1;
		d *= -1;
	}
	while (d > 10)
		d = d % 10;
	d *= sign;
	lDigi[0] = d;
	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigi[0]);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, lDigi[0]);
	else if (d < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigi[0]);
	return (0);
}
