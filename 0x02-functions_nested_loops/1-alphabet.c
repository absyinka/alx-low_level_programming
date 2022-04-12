#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();
	
	return (0);	
}

/**
 * print_alphabet - Print list of lowercase alphabet a-z
 *
 * Return: null
 */
void print_alphabet()
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
