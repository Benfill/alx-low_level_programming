#include	"main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: is the name of the file
 * text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int	fd, fw;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!filename || fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	fw = write(fd, text_content, strlen(text_content));
	if (fw == -1)
		return (-1);
	return (1);
}
