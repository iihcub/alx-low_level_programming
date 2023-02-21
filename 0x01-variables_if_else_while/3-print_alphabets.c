#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char small, capital;

	for (small = 'a'; small <= 'z'; small++)
	{
       		putchar(small);
	}

        for (capital = 'A'; captial <= 'Z'; captial++)
	{
       		putchar(capital);
	}

       	putchar('\n');
	return (0);
}
