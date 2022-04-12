#include "main.h"

/**
 * times_table - 9ce multiplication table
 *
 * Return: result of the multiplication table
 */
void times_table(void)
{
	int num, num1;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num1 = 1; num1 <= 9; num1++)
		{
			int result;

			result = (num * num1);
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');
			if (num1 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
