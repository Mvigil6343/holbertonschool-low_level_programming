#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */

char *leet(char *str)
{
	int a, b;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (a = 0; str[a]; a++)
	{
		for (b = 0; letters[b]; b++)
		{
			if (str[a] == letters[b])
			{
				str[a] = numbers[b];
				break;
			}
		}
	}
	return (str);
}
