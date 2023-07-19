#include "main.h"

/**
 * jack_bauer -  a function that prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int	a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (a < 3)
	{
		while (b < 10)
		{
			while (c < 6)
			{
				while (d < 10)
				{
					_putchar(48 + a);
					_putchar(48 + b);
					write(1, ":", 1);
					_putchar(48 + c);
					_putchar(48 + d);
					write(1, "\n", 1);
					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			b++;
			if (a == 2 && b == 4)
				break;
		}
		b = 0;
		a++;
	}
}
