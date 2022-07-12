#include "main.h"

/**
 * countSB - counts the set bits of a number
 * @op: the number
 * Return: number of count
 */

unsigned int countSB(unsigned int op)
{
	unsigned int count = 0, var;

	while (op && count < 64)
	{
		var = op & 1;
		if (var)
			count++;
		op >>= 1;
	}
	return (count);
}

/**
 * flip_bits - This function detects number of flips to be done for flipping
 * integers
 * @n: first number
 * @m: second number
 * Return: the number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int var;

	var = n ^ m;
	return (countSB(var));
}
