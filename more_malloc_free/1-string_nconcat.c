#include "main.h"
#include <string.h>

char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);

/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer to the memory
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

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
 * _strncat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: integer
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	for (c = 0; dest[c];)
	{
		c++;
	}
	d = 0;
	for (d = 0; src[d] != '\0' && d < n;)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: s string
 * @n: the number of bytes of the second string
 * Return: pointer to the array or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0';)
		len1++;
	for (len2 = 0; s2[len2] != '\0';)
		len2++;
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	_memset(str, 0, len1 + n + 1);
	_strcat(str, s1);
	_strncat(str, s2, n);
	return (str);
}
