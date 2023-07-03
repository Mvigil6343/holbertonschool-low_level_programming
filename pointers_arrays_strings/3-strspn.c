#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: a string
 * @accept: a string
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		int len = 0;

		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == s[a])
			{
				len = 1;
				break;
			}
		}
		if (len == 0)
		{
			break;
		}
	}
	return (a);
}
