#include "main.h"

/**
 * get_endianness - This function checks for the endianness
 * Return: 0 if Little Endian, else 1 if Big Endian
 */

int get_endianness(void)
{
	unsigned int a = 1;

	char *str = (char *)&a;

	if (*str)
		return (1);
	return (0);
}
