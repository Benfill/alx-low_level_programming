#ifndef	VARIADIC
#define	VARIADIC

#include	<stdio.h>
#include	<unistd.h>
#include	<stdarg.h>
#include	<stdlib.h>

void	_putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
