#include	"main.h"

/**
 * create_array - function creates an array of chars 
 * @size: the number of elements
 * @c: the character to be initialized in the array
 * Return: a pointer to the array, or NULL if it fails
 */

char	*create_array(unsigned int size, char c)
{
	int	i;
	char	*a;

	i = 0;
	a = (char *) malloc(1 * size + 1);
	if (size  == 0 || a == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[size] = '\0';
	return (a);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
