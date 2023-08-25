#include	"lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the head of the node
 */

void free_list(list_t *head)
{
	list_t *pNode = head, *pNext;

	while (pNode != NULL)
	{
		pNext = pNode->next;
		free(pNode);
		pNode = pNext;
	}
}
