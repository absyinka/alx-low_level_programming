#include "main.h"

/**
  * print_rev - Reverse a string output
  * @s: The string to be printed in reverse
  * Return: null
  */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
