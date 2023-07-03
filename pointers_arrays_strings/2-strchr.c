#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int run = 0;

	for (run = 0; s[run] != '\0'; run++)
	{
		if (s[run] == c)
		{
			return (run + s);
		}
	}
	if (c == '\0')
	{
		return (run + s);
	}
	return (0);
}
