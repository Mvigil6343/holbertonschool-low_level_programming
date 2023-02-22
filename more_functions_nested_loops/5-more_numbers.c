#include "main.h"
/**
 * more_numbers - prints all digits from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int z;

	for (i = 0; i <= 9; i++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}
