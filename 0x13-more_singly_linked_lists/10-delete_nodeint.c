#include	"lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: the address of the head
 * @index: the index of the node that should be deleted. Index
 * starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*actual;
	listint_t	*past;
	listint_t	*coming;
	unsigned int	count;

	count = 0;
	if (*head == NULL)
		return (-1);
	actual  = *head;
	while (actual != NULL)
	{
		coming = actual->next;
		if (count == index)
		{
			free(actual);
			if (index == 0)
				*head = coming;
			else
				past->next = coming;
			return (1);
		}
		past = actual;
		actual = actual->next;
		count++;
	}
	return (-1);
}
