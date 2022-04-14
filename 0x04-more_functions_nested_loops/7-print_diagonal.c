#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to draw
 * Return: result
 */
void print_diagonal(int n)
{
	int c, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (sp = 1; sp < c; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
