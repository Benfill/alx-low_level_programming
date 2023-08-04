#include	"main.h"

/**
 * palCheck - Helper function to check if a string is a palindrome recursively
 * @s: A pointer to the original string to check for palindrome
 * @str: A buffer to store a copy of the string (used for comparison)
 * @on: A flag to indicate whether to copy the string (1) or compare (0)
 * @i: The index to traverse the original string in 'on' state
 * @j: The index to traverse the copied string in 'off' state
 * Return: 1 if string is a palindrome and 0 if not
 */

int	palCheck(char *s, char *str, int on, int i, int j)
{
	if (on == 1)
	{
		if (s[i] == '\0')
		{
			str[i] = '\0';
			on = 0;
		}
		else
		{
			str[i] = s[i];
			return (palCheck(s, str, on, i + 1, j));
		}
	}
	if (on == 0)
	{
		if (str[j] != '\0')
		{
			if (s[i - 1] != str[j])
				return (0);
			else
				return (palCheck(s, str, on, i - 1, j + 1));
		}
	}
	return (1);
}

/**
 * is_palindrome - function return 1 if a string is a palindrome and 0 if not
 * @s: a pointer to the string
 * Return: 1 if s is palindrome and 0 if not
 */

int	is_palindrome(char *s)
{
	char	str[200];

	if (s == NULL)
		return (1);
	return (palCheck(s, str, 1, 0, 0));
}
