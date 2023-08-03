#include	"main.h"

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is prime, 0 if not
 */

int	actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is a prime
 * @n: the number
 * Return: 1 if the integer is a prime number, otherwise return 0
 */

int	is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
