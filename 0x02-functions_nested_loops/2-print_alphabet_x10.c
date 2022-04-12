#include<stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10x on a with a new line after
 *
 * Return: null
 */
void print_alphabet_x10(void)
{
	int l;

	while (l <= 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		l++;
	}
	_putchar('\n');
}
