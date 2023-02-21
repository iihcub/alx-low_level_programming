#include <stdio.h>

/**
 * main - Progam entry point
 *
 * Return: Alwys 0 (success)
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
