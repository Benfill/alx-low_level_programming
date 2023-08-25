#include	"lists.h"

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string
 * Return: the length of s
 */

int	_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * add_node_end  - function that adds a new node at the end of a list_t list
 * @head: the head of the node
 * @str: the str to be added at the end
 * Return: the address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*end;
	list_t	*tmp;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	end->str = strdup(str);
	end->len = _strlen(str);
	end->next = NULL;
	if (*head == NULL)
		*head = end;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = end;
	}
		return (*head);
}
