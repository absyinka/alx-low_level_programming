#include<unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: the character to print
 * Return: 1 (On Success)
 * On error, -1 is returned
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
