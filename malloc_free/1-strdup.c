#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - gives a pointer to a new string, duplicate of the string str
 * @str: the string to duplicate
 * Return: pointer to the string or NULL
 */
char *_strdup(char *str)
{
	char *p;
	int x, lgt;

	if (str == NULL)
		return (NULL);

	lgt = 0;
	while (str[lgt] != '\0')
		lgt++;

	p = malloc(sizeof(char) + (lgt + 1));
	if (p == NULL)
		return (NULL);

	for (x = 0; x <= lgt; x++)
		p[x] = str[x];

	return (p);
}
