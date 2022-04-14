#include<stdio.h>
i
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n1 < 90; n++)
	{
		for ()
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
		}
		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
