#include "main.h"
#include <stdlib.h>
char *_strcat(char *dest, char *src);
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	for (c = 0; dest[c];)
	{
		c++;
	}
	d = 0;
	for (d = 0; src[d];)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: A pointer to the concatenated array or null if fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	int len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (; s1[len1] != '\0';)
		len1++;
	for (; s2[len2] != '\0';)
		len2++;
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	_strcat(str, s1);
	_strcat(str, s2);
	return (str);
}
