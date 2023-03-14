#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: a string
 * @s2: s string
 * Return: pointer to the array or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 3);

	if (str == NULL)
	{
		return (NULL);
	}
	strcat(str, s1);
	strcat(str, s2);
	return (str);
}
