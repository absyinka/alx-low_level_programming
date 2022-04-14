#include "main.h"

/**
 * more_numbers - print numbers from 0 - 14 on 10 lines
 *
 * Return: printed numbers
 */
void more_numbers(void)
{
	int o, i;

	for (o = 0; o < 10; o++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
