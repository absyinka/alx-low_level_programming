#include "main.h"

/**
  * _strlen_recursion - function to count string using recursion
  * @s: string to count length
  * Return: @s
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
