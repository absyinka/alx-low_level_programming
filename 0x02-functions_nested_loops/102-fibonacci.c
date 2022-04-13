#include<stdlib.h>
#include<stdio.h>

/**
 * main - Print first 50 fibonnaci number
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int t1, t2, nth;

	t1 = 1;
	t2 = 2;
	printf("%ld, %ld", t1, t2);
	for (i = 0; i < 48; i++)
	{
		nth = t1 + t2;
		printf(", %ld", nth);
		t1 = t2;
		t2 = nth;
	}
	printf("\n");
	return (0);
}
