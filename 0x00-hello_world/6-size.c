#include <stdio.h>

/**
 * main - Printing the size of various types
 * Return: 0
 */

int	main(void)
{
	int	integer = sizeof(int);
	int	character = sizeof(char);
	int	flt = sizeof(float);
	int	intLong = sizeof(long);
	int	intLoLong = sizeof(long long);

	printf("Size of a char: %ld byte(s)\n", character);
	printf("Size of an int: 4 byte(s)\n", integer);
	printf("Size of a long int: %ld byte(s)\n", intLong);
	printf("Size of a long long int: %ld byte(s)\n", intLoLong);
	printf("Size of a float: %ld byte(s)\n", flt);
	
	return (0);
}
