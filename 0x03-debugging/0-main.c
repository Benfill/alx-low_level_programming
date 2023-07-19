#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - test positive_or_negative function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	positive_or_negative(0);
	return (0);
}
