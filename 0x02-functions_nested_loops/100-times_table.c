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
	
	if(n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (num1 = 1; num1 <= n; num1++)
			{
				r = (num * num1);
				_putchar(',');
				_putchar(' ');
				if (r <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r <= 99)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar(((r / 100) % 10) +  '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
