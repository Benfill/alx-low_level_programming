#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: pointer points to first node
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t	*next_N;
	size_t	counter = 0;

	next_N = malloc(sizeof(list_t));
	if (next_N == NULL)
		return (0);
	next_N = h;
	while (next_N != NULL)
	{
		next_N = next_N->next;
		counter++;
	}
	return (counter);
}
