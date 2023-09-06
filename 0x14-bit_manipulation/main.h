#ifndef	BIT_MAN
#define	BIT_MAN
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

void	_putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
