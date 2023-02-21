#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
		{
			continue;
		}

		else
		{
			putchar(n);
		}
	}

	putchar('\n');
	return (0);
}
