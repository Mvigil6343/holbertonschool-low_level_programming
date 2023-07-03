#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: a string
 * @accept: a string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int run;

	while (*s)
	{
		for (run = 0; accept[run]; run++)
			if (*s == accept[run])
				return (s);
		s++;
	}
	return ('\0');
}
