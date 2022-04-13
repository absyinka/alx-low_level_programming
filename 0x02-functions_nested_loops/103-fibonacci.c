#include<stdlib.h>
#include<stdio.h>

/**
 * main - Print first 50 fibonnaci number
 *
 * Return: 0
 */
int main(void)
{
	long int t1, t2, nth, fin;

	t1 = 1;
	t2 = 2;
	nth = fin = 0;
	while (nth <= 4000000)
	{
		nth = t1 + t2;
		t1 = t2;
		t2 = nth;
		if ((t1 % 2) == 0)
		{
			fin += t1;
		}
	}
	printf("%ld\n", fin);

	return (0);
}
