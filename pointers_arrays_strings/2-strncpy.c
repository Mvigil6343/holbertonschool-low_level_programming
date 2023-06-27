#include "main.h"
/**
 * _strncpy - copies a string till n
 * @src: pointer to the string
 * @dest: destination
 * @n: an integer
 *
 * Return: returns copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
