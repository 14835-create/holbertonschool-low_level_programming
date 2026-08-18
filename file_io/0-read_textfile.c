#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads txtfile and prints POSIX stdout
 * @filename: pointer to name of file
 * @letters: num of letters the function read/print
 *
 * Return: num of bytes written otherwise 0 if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(op);
		return (0);
	}

	re = read(op, buffer, letters);
	if (re == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, re);
	if (wr == -1 || wr != re)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
