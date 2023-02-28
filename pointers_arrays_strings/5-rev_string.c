#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int count = 0, tnuoc = 0;
	char rev;

	while (s[count])
	{
		count++;
	}
	while (tnuoc < count--)
	{
		rev = s[tnuoc];
		s[tnuoc++] = s[count];
		s[count] = rev;
	}
}
