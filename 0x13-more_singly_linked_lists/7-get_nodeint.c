#include	"lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: a pointer to the head
 * @index: the index of the node to be returned
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
