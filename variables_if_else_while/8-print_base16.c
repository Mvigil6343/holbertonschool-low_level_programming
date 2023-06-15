#include <stdio.h>
/**
 * main - prints all single digit characters of base 16 starting from 0
 * Return: 0
 */
int main(void)
{
	int num = '0';
	char cha;

	for (; num <= '9'; num++)
		putchar(num);
	for (cha = 'a'; cha <= 'f'; cha++)
		putchar(cha);
	putchar('\n');
	return (0);
}
