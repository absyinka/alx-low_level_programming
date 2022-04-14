#include "main.h"

/**
 * print_line - print lines n number of times
 * @n: number of times lines is to be printed
 * Return: printed result
 */
void print_line(int n)
{
	int uc;

	uc = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (uc <= n)
		{
			_putchar('_');
			uc++;
		}
		_putchar('\n');
	}
}
