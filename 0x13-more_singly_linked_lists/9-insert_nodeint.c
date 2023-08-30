#include	"lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: pointer to the head
 * @idx: he index of the list where the new node should be added
 * @n: the number sould be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*new;
	listint_t	*actual;
	listint_t	*past;
	unsigned int	count;

	if (*head == NULL)
		return (NULL);
	count = 0;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	actual = *head;
	while (past != NULL)
	{
		if (count == idx)
		{
			if (idx == 0)
				*head = new;
			else
				past->next = new;
			new->next = actual;
			return (new);

		}
		past = actual;
		actual = actual->next;
		count++;
	}
	return (NULL);
}
