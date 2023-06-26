#include "main.h"
/**
 * _strcpy - copies a string
 * @src: pointer to the string
 * @dest: destination
 *
 * Return: returns copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *cp = dest;

	while ((*cp++ = *src++) != '\0')
		;
	return (dest);
}
