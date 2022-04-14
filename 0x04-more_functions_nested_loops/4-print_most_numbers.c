#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9 excluding 2 and 4
 *
 * Return: printed numbers
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if ((n == 50) || (n == 52))
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
