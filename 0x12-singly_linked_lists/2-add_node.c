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
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the head of the node
 * @str: string to be added
 * Return: head's address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);
	first->str = strdup(str);
	first->len = _strlen(str);
	first->next = *head;
	*head = first;
	return (*head);
}
