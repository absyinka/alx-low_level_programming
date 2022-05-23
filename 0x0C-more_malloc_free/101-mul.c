#include "main.h"

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to be moved
 * @s: size of the string
 *
 * Return: void
 */
int _print(char *str, int s)
{
	int i, j;

	while (i < s)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == s - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
   * @dest: destination of multiplication
        * @dest_index: highest index to start addition
	 *
	  * Return: pointer to dest, or NULL on failure
 */
