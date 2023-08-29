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
	listint_t	*tmp;
	listint_t	*tmp2;
	unsigned int	count;

	if (*head == NULL)
		return (NULL);
	count = 0;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	tmp2 = *head;
	while (tmp2 != NULL)
	{
		if (count + 1 == idx)
			tmp = tmp2;
		else if (count == idx)
		{
			if (idx != 0)
				tmp->next = new;
			new->n = n;
			if (tmp2)
				new->next = tmp2;
			else
				new->next = NULL;
			return (new);
		}
		tmp2 = tmp2->next;
		count++;
	}
	return (NULL);
}
