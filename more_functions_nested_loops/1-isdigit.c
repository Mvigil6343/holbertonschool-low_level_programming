#include "main.h"
/**
 * _isdigit - Checks for digit
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _idigit(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
