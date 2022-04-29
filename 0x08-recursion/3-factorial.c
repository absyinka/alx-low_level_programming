#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: given number
  * Return: @n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	n *= factorial(n - 1);
	return (n);
}
