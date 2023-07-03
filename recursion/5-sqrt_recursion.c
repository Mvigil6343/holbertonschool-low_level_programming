#include "main.h"
/**
 * sqrtaux - auxiliar function
 * @n: an integer
 * @x: an integer
 * Return: the auxiliar
 */

int sqrtaux(int x, int n)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrtaux(x + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * Return: the square root
 * @n: the number to be square rooted
 */

int _sqrt_recursion(int n)
{
	return (sqrtaux(1, n));
}
