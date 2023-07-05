#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: Size of the array to create
 * @c: the character that will initialize the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *arr = NULL;

	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (; count <= size; count++)
		arr[count] = c;
	return (arr);
}
