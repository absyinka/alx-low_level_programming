#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: single letter character
 * Return: 1 if c is a letter, lowercase or uppercase, 0, if otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
