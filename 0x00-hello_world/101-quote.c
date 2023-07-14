#include <unistd.h>

/**
 * main - printing string to stderr
 * Return: 1
 */

int	main(void)
{
	write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);

	return (0);
}
