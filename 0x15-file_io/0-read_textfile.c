#include "main.h"

/**
 * read_textfile - This function reads text files and prints them to
 * standard output
 * @filename: a pointer to the file to be read
 * @letters: the number of letters to be read and printed
 * Return: the number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf_size;
	ssize_t rd, wr;
	int fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	if (filename == NULL)
		return (0);

	buf_size = malloc(sizeof(char) * letters);

	rd = read(fp, buf_size, letters);
	wr = write(STDOUT_FILENO, buf_size, rd);
	if (wr == -1)
		return (0);

	close(fp);
	free(buf_size);
	return (wr);
}
