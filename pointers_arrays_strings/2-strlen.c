#include "main.h"
/**
 * _strlen - prints the lenght of a string
 * @s: the string
 *
 * Return: l
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0';)
	{
		l++;
	}
	return (l);
}
