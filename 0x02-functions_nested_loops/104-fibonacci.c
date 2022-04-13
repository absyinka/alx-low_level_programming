#include<stdlib.h>
#include<stdio.h>

/**
 * main - Print first 50 fibonnaci number
 *
 * Return: 0
 */
int main(void)
{
	int i, b, b1;
	long int t1, t2, nth, nth1, t11, t22;

	t1 = 1;
	t2 = 2;
	b = b1 = 1;
	printf("%ld, %ld", t1, t2);
	for (i = 0; i < 96; i++)
	{
		if (b)
		{
			nth = t1 + t2;
			printf(", %ld", nth);
			t1 = t2;
			t2 = nth;
		}
		else
		{
			if (b1)
			{
				t11 = t1 % 1000000000;
				t22 = t2 % 1000000000;
				t1 /= 1000000000;
				t2 /= 1000000000;
				b1 = 0;
			}
			nth1 = (t11 + t22);
			nth = t1 + t2 + (nth1 / 1000000000);
			printf(", %ld", nth);
			printf("%ld", nth1 % 1000000000);
			t1 = t2;
			t11 = t22;
			t2 = nth;
			t22 = (nth1 % 1000000000);
		}
		if (((t1 + t2) < 0) && b == 1)
			b = 0;
	}
	printf("\n");
	return (0);
}
