#include	"main.h"

/**
 * is_prime_number - function that returns 1 if the input integer is a prime number
 * @n: the number
 * Return: 1 if the integer is a prime number, otherwise return 0
 */

int	is_prime_number(int n)
{
	if (n == 1 || n == 0)
	{
		return (0);
	}
	else if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	else
	{
         is_prime_number(n1);
	}
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
