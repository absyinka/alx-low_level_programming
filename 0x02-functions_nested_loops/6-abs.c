#include<stdio.h>
#include "main.h"

/**
 * _abs - get absolute value of a number
 * @n: integer input
 * Return: absolute value of n
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
