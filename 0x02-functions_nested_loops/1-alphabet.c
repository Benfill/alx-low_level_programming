#include "main.h"

/**
 * print_alphabet -programme that prints alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
