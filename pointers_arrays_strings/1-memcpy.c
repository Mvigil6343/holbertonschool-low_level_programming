#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: pointer to the array
 * @n: bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];
	return (dest);
}
