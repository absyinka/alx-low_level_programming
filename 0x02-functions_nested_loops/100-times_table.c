#include "main.h"
#include<stdio.h>

/**
 * print_times_table - print multiple times table based on integer provided
 * @n: integer base for multiplication table
 * Return: result from iteration
 */
void print_times_table(int n)
{
	int r, num, num1;

	for (num = 0; num <= n; num++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num1 = 1; num1 <= n; num1++)
		{
			r = (num * num1);
			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((r % 10) +  '0');
			if (num1 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
