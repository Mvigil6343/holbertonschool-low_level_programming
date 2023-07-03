#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: a string
 * @needle: a substring
 *
 * Return: a pointer to the located substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int h, n, x;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		x = 1;
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[h + n] != needle[n])
			{
				x = 0;
				break;
			}
		}
		if (x == 1)
			return (&haystack[h]);
	}
	return ('\0');
}
