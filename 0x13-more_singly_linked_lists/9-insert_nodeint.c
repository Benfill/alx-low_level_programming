#include	"lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: the head of the list
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t	counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

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
	count = listint_len(*head);
	if (count + 1 < idx)
		return (NULL);
	count = 0;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	actual = *head;
	past = actual;
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
		if (actual == NULL && count + 2 != idx)
			break;
		past = actual;
		actual = actual->next;
		count++;
	}
	return (NULL);
}
