#include	"function_pointers.h"

/**
 * print_name - function prints name through pointer to other function
 * @name: the name to be printed
 * @f: pointer to a function
 */

void	print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
