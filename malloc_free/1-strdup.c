#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the string to duplicate.
 * Return:  pointer to the duplicated string or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	int count = 0, lng = 0;
	char *dup = NULL;

	if (!str)
		return (NULL);
	while (str[lng] != '\0')
		lng++;
	dup = malloc(sizeof(char) * (lng + 1));
	if (!dup)
		return (NULL);
	for (; count <= lng; count++)
		dup[count] = str[count];
	return (dup);
}
