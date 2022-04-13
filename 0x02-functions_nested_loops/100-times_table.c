#include "main.h"
#include<stdio.h>

/**
 * print_times_table - print multiple times table based on integer provided
 * @n: integer base for multiplication table
 * Return: result from iteration
 */
void print_times_table(int n)
{
	int num, num1;

	for (num = 0; num <= n; num++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		printf("0");
		printf(",  ");
		for (num1 = 1; num1 <= n; num1++)
		{
			int r;

			r = (num * num1);
			printf("%d", r);
			if (num1 < n)
			{
				printf(",  ");
			}
		}
		printf("\n");
	}

}
