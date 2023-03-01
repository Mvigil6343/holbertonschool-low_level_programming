#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	unsigned int sig = 1, n = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sig *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{

			n = n * 10 + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}
		s++;
	}
	return (n * sig);
}
