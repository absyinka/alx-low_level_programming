#include "main.h"

/**
 * print_square - function to print squares on the terminal output
 * @size: integer to measure the size of the square
 * Return: print square
 */
void print_square(int size)
{
	int c, c1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (c1 = 1; c1 < size; c1++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
