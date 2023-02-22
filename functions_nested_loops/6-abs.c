#include "main.h"
/**
 * _abs - Computes te absolute value of an integer
 * @n: The integer to compute
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
