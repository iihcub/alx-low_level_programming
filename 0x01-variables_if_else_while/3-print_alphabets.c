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

        for (capital = 'A'; capital <= 'Z'; capital++)
	{
       		putchar(capital);
	}

       	putchar('\n');
	return (0);
}
