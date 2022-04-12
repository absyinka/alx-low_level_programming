#include<stdio.h>
#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n: number to check sign for
 * Return: 1 if number is greater than zero
 * returns 0 if number is equal to zero
 * returns -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
