#include "main.h"

/**
 * get_bit - This function gives the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit to be printed
 * Return: the value of the bit, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
