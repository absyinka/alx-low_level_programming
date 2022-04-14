#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * Return: numbers printed from 0 - 9
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
