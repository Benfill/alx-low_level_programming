#include	"main.h"

/**
 * main - program prints the number of args passed into it
 * @argc: number of args
 * @argv: array of argument
 * Return: 0
 */

int	main(int argc, char **argv)
{

	if (argc >= 0)
		putchar(47 + argc);
	(void)**argv;
	return (0);
}
