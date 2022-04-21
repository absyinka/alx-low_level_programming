#include "main.h"

/**
  * print_rev - Reverse a string output
  * @s: The string to be printed in reverse
  * Return: null
  */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	n = i - 1;
	for (i = n; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
	return;
}
