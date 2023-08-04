#include	"main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: a pointer to the string
 * Return: the length
 */

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_recursive - function to check if a string is a palindrom
 * @s: A pointer to the original string to check for palindrome
 * @start: the start of s
 * @end: the end of s
 * Return: 1 if string is a palindrome and 0 if not
 */

int	is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - function return 1 if a string is a palindrome and 0 if not
 * @s: a pointer to the string
 * Return: 1 if s is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (s == NULL)
		return (0);
	return (is_palindrome_recursive(s, 0, len - 1));
}
