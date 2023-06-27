#include "main.h"
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
