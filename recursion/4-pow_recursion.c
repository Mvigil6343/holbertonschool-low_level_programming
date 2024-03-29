#include "main.h"
/**
 * _pow_recursion - finds the value of x raised to the power of y
 * @y: exponent
 * @x: base
 * Return: the value of the pow
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
