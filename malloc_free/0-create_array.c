#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - makes an array of chars, initializes it with a specific char
 * @size: size of the array
 * @c: the char to initialize the array
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;

	char *str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
