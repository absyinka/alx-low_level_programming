#include "main.h"

/**
  * _strlen - Returns the lenght of a string
  * @str: The string whose length is to be found
  * Return: The length of @str
  */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
