#include	"main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: string contains the filename
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int n = open(filename, O_RDONLY);
	size_t i = 0;
	ssize_t tmp = 0;

	buff = malloc(letters + 1);
	if (!buff || n == -1 || filename == NULL)
		return (0);
	read(n, buff, letters);
	buff[letters] = '\0';
	close(n);
	while (i < letters)
	{
		if (!buff[i])
			break;
		i += write(1, &buff[i], 1);
	}
	tmp = i;
	free(buff);
	return (tmp);
}
