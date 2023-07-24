#include	"main.h"

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
	int	checker;

	i =		0;
	sum =		0;
	sign =		1;
	checker =	0;
	while (s[i] == ' ')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '+')
			sign *= +1;
		else
			sign *= -1;
		i++;
	}
	while (s[i])
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1]  == '-' || s[i - 1] == '+')
				checker = 1;
			digit = s[i] - 48;
			sum = sum * 10 + digit;
			i++;
		}
		if (sum > 0)
			break;
		i++;
	}
	if (checker == 1)
		sum *= sign;
	return (sum);
}
