#include "main.h"

/**
 * create_file - This function create text files
 * @filename: a pointer to the file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, else -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, wr, num;

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num = 0; text_content[num]; num++)
		;

	wr = write(fp, text_content, num);
	if (wr == -1)
		return (-1);

	close(fp);

	return (1);
}
