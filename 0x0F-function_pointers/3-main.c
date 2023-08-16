#include	"3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of args
 * @argv: arguments
 * Return: 0
 */

int	main(int argc, char **argv)
{
	int	calc, num1, num2;
	char	*operator;

	if (argc > 4 || argc == 1 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1	=	atoi(argv[1]);
	num2	=	atoi(argv[3]);
	operator =	argv[2];
	if (((operator[0] != '+' && operator[0] != '-' &&
	operator[0] != '/' && operator[0] != '*' && operator[0] != '%')
	|| (operator[1] != '\0')))
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
