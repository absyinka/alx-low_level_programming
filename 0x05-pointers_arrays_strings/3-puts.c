#include "main.h"

/**
  * _puts - Prints a string to standard output
  * @str: The string be printed to output
  * Return: null
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
