#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - Prints natural numbers below 1024
 * that are multiples of 3 and 5
 *
 * Return: list of natural numbers
 */
int main(void)
{
	int a, n;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			n += a;
	}
	printf("%d\n", n);

	return (0);
}
