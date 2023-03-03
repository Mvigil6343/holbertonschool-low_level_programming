#include "main.h"
/**
 * _strcmp - function that compares strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the comparation
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;
	int count = 0;


		if (s1[count] > s2[count])
		{
			cmp = (s1[count] - s2[count]);
		}
		if (s1[count] < s2[count])
		{
			cmp = (s1[count] - s2[count]);
		}
		if (s1[count] == s2[count])
		{
			cmp = 0;
		}
		count++;
	return (cmp);
}
