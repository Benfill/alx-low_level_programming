#include	"variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: void
 */

void	print_all(const char * const format, ...)
{
	int	i = 0;
	float	f;
	int	integer;
	char	*str;
	char	*s = ", ";
	va_list	p;

	va_start(p, format);
	while (format != NULL && format[i])
	{
		if (format[i + 1] == '\0')
			s = "";
		switch (format[i])
		{
			case 'i':
				integer	= va_arg(p, int);
				printf("%i%s", integer, s);
				break;
			case 'c':
				integer = va_arg(p, int);
				printf("%c%s", integer, s);
				break;
			case 'f':
				f = va_arg(p, double);
				printf("%f%s", f, s);
				break;
			case 's':
				str = va_arg(p, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", str, s);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	putchar('\n');
}
