#include	"lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head of th list
 */

void free_listint(listint_t *head)
{
	listint_t	*tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
