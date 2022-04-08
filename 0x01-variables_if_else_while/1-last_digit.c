#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int length;
	char text[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	length = n % 10;

	if (length > 5)
	{
		printf("%s %d is %d and is greater than 5\n", text, n, length);
	}
	else if (length == 0)
	{
		printf("%s %d is %d and is 0\n", text, n, length);
	}
	else if (length < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", text, n, length);
	}

	return (0);
}
