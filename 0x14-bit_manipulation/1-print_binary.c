#include "main.h"

/**
 * print_binary - This function prints the binary representation of a number
 * @n: The number that its binary representation to be printed
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar(49);
			counter++;
		}
		else if (counter)
		{
			_putchar(48);
		}
	}
	if (n == 0)
		_putchar(48);
}
