#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char rv;
	int len = 0, nel = 0;

	while (s[len])
		len++;

	while (nel < len--)
	{
		rv = s[nel];
		s[nel++] = s[len];
		s[len] = rv;
	}
}
