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
	ssize_t bytes_written = 0;

	buff = malloc(letters + 1);
	if (!buff)
		return (0);
	if (n == -1 || filename == NULL)
	{
		free(buff);
		close(n);
		return (0);
	}
	tmp = read(n, buff, letters);
	if (tmp == -1)
	{
		free(buff);
		return (0);
	}
	buff[letters] = '\0';
	close(n);
	while (i < letters)
	{
		if (!buff[i])
			break;
		bytes_written = write(1, &buff[i], 1);
		if (bytes_written == -1)
		{
			free(buff);
			close(n);
			return (0);
		}
		i += bytes_written;
	}
	tmp = i;
	free(buff);
	return (tmp);
}
