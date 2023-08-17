#include	"variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */

void	print_all(const char * const format, ...)
{
	int	i = 0;
	char	c;
	float	f;
	int	integer;
	char	*str;
	va_list	p;

	va_start(p, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
				integer	= va_arg(p, int);
				printf("%i", integer);
				break;
				case 'c':
				c = va_arg(p, int);
				printf("%c", c);
				break;
				case 'f':
				f = va_arg(p, double);
				printf("%f", f);
				break;
				case 's':
				str = va_arg(p, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
				default:
				i++;
				continue;
			}
			i++;
		}
	}
	putchar('\n');
}
