#include<stdio.h>

/**
 * main - program to print fizz buzz interview question
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c == 100)
		{
			printf("Buzz");
		}
		else if ((c % 3) == 0 && (c % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
	}
	printf("\n");

	return (0);
}
