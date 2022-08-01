#include "main.h"

/**
 * close_file_error - detects if a file can't be closed
 * @file: file to check it's return value on failure
 */

void close_file_error(int file)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}


/**
 * main - program to copy file's content to another
 * @argc: counts the number of arguments added
 * @argv: contains the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int rd, wr, file_from, file_to;
	mode_t permissions;
	char *buf_size;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*read first file*/
	file_from = open(argv[1], O_RDONLY);

	buf_size = malloc(sizeof(char) * 1024);

	rd = read(file_from, buf_size, 1024);
	if (!file_from || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/*write to second file*/
	permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, permissions);

	wr = write(file_to, buf_size, rd);
	if (file_to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(file_from);
	close_file_error(file_from);
	close_file_error(file_to);

	return (wr);

	return (0);
}
