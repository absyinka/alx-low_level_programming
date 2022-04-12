#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @nld: intger to print
 * Return: the value of the last digit
 */
int print_last_digit(int nld)
{
	int last_digit;

	last_digit = (nld % 10);

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	putchar(last_digit + '0');
	return (last_digit);
}
