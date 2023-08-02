#include	"main.h"

/**
 * factorial - function returns a factorial of a given number
 * @n: the number
 * Return: the factorial
 */

int	factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	if (n == 0)
		return (1);
	return (0);
}
