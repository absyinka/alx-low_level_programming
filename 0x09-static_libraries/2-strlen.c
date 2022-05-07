#include "main.h"

/**
  * _strlen - Returns the lenght of a string
  * @str: The string whose length is to be found
  * Return: The length of @str
  */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
