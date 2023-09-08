#include	"main.h"

/**
 * _strlen - function that counts the lenght of a string
 * @s: the string
 * Return: the length of s
 */

int	_strlen(char *s)
{
	int	i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - function creates a file
 * @filename: function that creates a file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int	fd, fw = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		fw = write(fd, text_content, _strlen(text_content));
		if (fw == -1)
		{
			close(fd);
			return (-1);
		}
	close(fd);
	return (1);
}
