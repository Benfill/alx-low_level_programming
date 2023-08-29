#include	"lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the
 * end of a listint_t list
 * @head: the head of the list
 * @n: the number to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new;
	listint_t	*tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (*head);
}
