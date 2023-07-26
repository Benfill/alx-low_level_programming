#include	"main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the number of character
 * Return: a pointer to the resulting string dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i =	0;
	j =	0;
	while (i < n)
	{
		if (dest[j] == '\0')
		{
			while (i < n)
			{
				dest[j + i] = src[i];
				i++;
				if (src[i] == '\0')
					break;
			}
			break;
		}
			j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
