#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: the modified string
 */

char *cap_string(char *str)
{
	int ch;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	for (ch = 1; str[ch] != '\0'; ch++)
		if ((str[ch - 1] == ' ' || str[ch - 1] == '\t' || str[ch - 1] == '\n'
|| str[ch - 1] == ',' || str[ch - 1] == ';' || str[ch - 1] == '.' ||
str[ch - 1] == '!' || str[ch - 1] == '?' || str[ch - 1] == '\"' || str[ch - 1]
== '(' || str[ch - 1] == ')' || str[ch - 1] == '{' || str[ch - 1] == '}') &&
(str[ch] >= 'a' && str[ch] <= 'z'))
			str[ch] -= 32;
	return (str);
}
