#include	"lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t		counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
