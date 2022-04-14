#include "main.h"

/**
 * print_triangle - print triangles on the terminal output
 * @size: integer to measure the size of triangle
 * Return: result
 */
void print_triangle(int size)
{
	int c, sp, hh;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= (size - 1); c++)
		{
			for (sp = 0; sp < (size - 1) - c; sp++)
			{
				_putchar(' ');
			}
			for (hh = 0; hh <= c; hh++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
