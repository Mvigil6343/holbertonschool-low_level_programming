#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 * Return:  pointer to the duplicated string or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	int count = 0;
	char *dup = NULL;

	dup = malloc(sizeof(char) * (*str));
	if (!str)
		return (NULL);
	if (!dup)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	for (; str[count] != '\0'; count++)
		dup[count] = str[count];
	return (dup);
}
