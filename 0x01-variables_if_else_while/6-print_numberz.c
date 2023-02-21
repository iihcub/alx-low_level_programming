#include <stdio.h>

/**
 * main - Program starting point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = '0';

	for (; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
