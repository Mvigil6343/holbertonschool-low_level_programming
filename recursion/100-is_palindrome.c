#include "main.h"

/**
 * aux_lenght - get the lenght of string
 *
 * @s: string to get the lenght
 *
 * Return: 1 + recursion
 */

int aux_lenght(char *s)
{
	if (*s != '\0')
	{
		return (1 + aux_lenght(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * aux_palindrome - compares the first y last positions of the string
 *
 * @first: first position
 * @last: last position
 *
 * Return: 1 * the value of the recursion
 */

int aux_palindrome(char *first, char *last)
{
	if (first >= last)
	{
		return (1);
	}
	if (*first != *last)
	{
		return (0);
	}
	else
	{
		return (aux_palindrome(first + 1, last - 1));
	}
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int last = 0;

	last = aux_lenght(s);

	if (last == 0)
	{
		return (1);
	}

	return (aux_palindrome(s, (s + (last - 1))));
}
