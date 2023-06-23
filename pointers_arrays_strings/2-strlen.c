#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to be checked
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
