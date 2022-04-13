#include "main.h"
#include<stdio.h>
/**
* print_times_table - prints time table number based on arg provided
* @n: integer base for multiplication
* Return: result from iteration
*/
/*void print_times_table(int n)
{
	int num, num1;
	
	for (num = 0; num <= n; num++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num1 = 1; num1 <= n; num1++)
		{
			int res;
			
			res = (num * num1);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');
			if (num1 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}*/
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
