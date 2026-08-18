#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * print_error - prints error msg and exits with code
 * @code: exit code
 * @msg: message
 * @file: filename
 * @fd: file descriptor
 */

void print_error(int code, const char *msg, const char *file, int fd)
{
	if (file)
		dprintf(STDERR_FILENO, msg, file);
	else
		dprintf(STDERR_FILENO, msg, fd);
	exit(code);
}
/**
 * copy_chunk - writes chunk of data
 * @from: source fd
 * @to: destination fd
 * @buffer: buffer
 * @r: bytes read
 * @file_to: name od destination file
 */

void copy_chunk(int from, int to, char *buffer, int r, char *file_to)
{
	int w = write(to, buffer, r);

	if (w == -1 || w != r)
	{
		close(from);
		close(to);
		print_error(99, "Error: Can't write to %s\n", file_to, 0);
	}
}

/**
 * main - copies content of file to other
 * @argc: num of argument
 * @argv: array of argument strings
 *
 * Return: 0 = success otherwise exit with specific codes on fail
 */

int main(int argc, char *argv[])
{
	int from, to, r;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", NULL, 0);

	from = open(argv[1], O_RDONLY);
	if (from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1], 0);

	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		close(from);
		print_error(99, "Error: Can't write to %s\n", argv[2], 0);
	}

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
		copy_chunk(from, to, buffer, r, argv[2]);

	if (r == -1)
	{
		close(from);
		close(to);
		print_error(98, "Error: Can't read from file %s\n", argv[1], 0);
	}

	if (close(from) == -1)
		print_error(100, "Error: Can't close fd %d\n", NULL, from);

	if (close(to) == -1)
		print_error(100, "Error: Can't close fd %d\n", NULL, to);

	return (0);
}
