#include "main.h"

/**
 * _isdigit - check for a digit 0 - 9
 * @c: integer as argument to check
 * Return: 1 if it is a digit, 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
