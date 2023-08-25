#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: pointer points to first node
 * Return: the number of nodes
 */

size_t	print_list(const list_t *h)
{
	const list_t	*next_N;
	size_t	counter = 0;

	next_N = malloc(sizeof(list_t));
	if (next_N == NULL)
	{
		return (-1);
	}
	next_N = h;
	while (next_N != NULL)
	{
		if (next_N->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", next_N->len, next_N->str);
		next_N = next_N->next;
		counter++;
	}
	return (counter);
}
