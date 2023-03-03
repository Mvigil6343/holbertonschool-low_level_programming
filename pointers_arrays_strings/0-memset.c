#include "main.h"
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
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		m++;
	}
	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
