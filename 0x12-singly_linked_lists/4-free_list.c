#include	"lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the head of the node
 */

void free_list(list_t *head)
{
	list_t	*tmp;

	tmp = head;
	while (tmp->next != NULL)
	{
		head = tmp;
		tmp = tmp->next;
		free(head);
	}
	free(tmp);
}
