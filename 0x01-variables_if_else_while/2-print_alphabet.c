#include <stdio.h>
#include <ctype.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
		putchar();
	}

	return (0);
}
