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

	count = 0;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		tmp = *head;
		while (tmp != NULL || count <= idx)
		{
			if (count == idx)
			{
				tmp2->next = new;
				new->next = tmp;
				break;
			}
			tmp2 = tmp;
			tmp = tmp->next;
			count++;
		}
	}
	else
	{
		*head = new;
		new->next = NULL;
	}
	if (count != idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
