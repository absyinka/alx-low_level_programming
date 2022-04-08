#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
