#include <stdio.h>

/**
 * main - Program starting point
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	char num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
