#include "main.h"
#include <string.h>
void *_memset(void *s, int c, unsigned int len);
/**
 * _memset - fills memory with a constant byte.
 * @s: the pointer to the memory
 * @c: the constant byte
 * @len: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
void *_memset(void *s, int c,  unsigned int len)
{
	unsigned char *p = s;

	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: as needed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pn;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pn = malloc(nmemb * size);
	if (pn == NULL)
		return (NULL);

	_memset(pn, 0, nmemb * size);
	return (pn);
}
