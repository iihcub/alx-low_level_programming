#include <stdio.h>

/**
 * main -A program that prints all the numbers of base16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a, n;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
