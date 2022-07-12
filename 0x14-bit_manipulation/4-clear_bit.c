#include "main.h"

/**
 * clear_bit - This function sets the value of a bit to '0' at a given index
 * @n: the number the operation is to be performed on
 * @index: the index to be cleared
 * Return: n on success, else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 255)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
