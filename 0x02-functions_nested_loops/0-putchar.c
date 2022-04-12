#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *text = "_putchar";

	while (*text)
	{
		_putchar(*text);
		text++;
	}
	_putchar('\n');

	return (0);
}
