#include	"main.h"
#include	<limits.h>

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
	while (s[i] == ' ')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i])
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			if (sum > INT_MAX / 10
			|| (sum == INT_MAX / 10 && s[i] - '0' > 7))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
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
