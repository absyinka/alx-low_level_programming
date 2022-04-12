#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - Print list of lowercase alphabet a-z
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
