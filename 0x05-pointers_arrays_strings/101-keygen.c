#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include	<time.h>

/**
 * main - function generate a random valid password
 * Return: 0
 */

int	main(void)
{
	int i = 0;
	int randomizer = 0;
	int N = 8;
	char *numbers;
	char *letter;
	char *LETTER;
	char *symbols;
	char *password;
	

	srand((unsigned int)(time(NULL)));

	numbers[10] = "0123456789";
	letter[26] = "abcdefghijklmnoqprstuvwyzx";
	LETTER[26] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
	symbols[8] = "!@#$^&*?";;

	randomizer = rand() % 4;
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
		}
		return (0);
	}
}
