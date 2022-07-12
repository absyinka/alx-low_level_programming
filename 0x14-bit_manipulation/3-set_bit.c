#include "main.h"

/**
 * set_bit - This function set the value of a bit to 1
 * @n: the number the operation is to be performed on
 * @index: the index to be changed
 * Return: n on success, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
