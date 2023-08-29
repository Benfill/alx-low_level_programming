#include	"lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 * @head: the address of the head
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int		n;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
