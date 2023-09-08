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

	buff = malloc(letters + 1);
	if (!buff || n == -1 || filename == NULL)
		return (0);
	read(n, buff, letters);
	buff[letters + 1] = '\0';
	close(n);
	return (printf("%s", buff));
}
