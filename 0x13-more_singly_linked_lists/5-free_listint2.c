#include	"lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the address of the ponter to the head
 */

void free_listint2(listint_t **head)
{
	listint_t	*tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
	head = NULL;
}
