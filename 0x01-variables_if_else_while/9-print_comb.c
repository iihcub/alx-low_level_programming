#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');
	return (0);
}
