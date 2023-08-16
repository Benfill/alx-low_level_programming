#include	<stdio.h>
#include	<stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @ac: the number of args
 * @av: arguments
 * Return: 0
 */

int	main(int ac, char **av)
{
	int	byte, i = 0;
	char	*opcode;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(av[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (char *)main;
	while (i < byte)
	{
		if (i == byte - 1)
		{
			printf("%02hhx\n", opcode[i]);
			break;
		}
		printf("%02hhx ", opcode[i++]);
	}
	return (0);
}
