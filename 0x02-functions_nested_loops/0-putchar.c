#include<stdio.h>
#include<putchar.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(text[c]);
	}
	_putchar('\n')'

	return (0);
}
