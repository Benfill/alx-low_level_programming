#include	"lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: pointer to the head
 * Return: the sum of all the data (n) of a listint_t
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int	n;

	n = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
