#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	for (c = '0'; dest[c];)
	{
		c++;
	}
	for (d = '0'; src[d];)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
