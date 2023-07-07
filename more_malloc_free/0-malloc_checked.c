#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	char x = 98;

	p = malloc(b);
	if (p == NULL)
	{
		exit(x);
	}
	return (p);
}
