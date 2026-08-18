#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes a string
 * @filename: name of file to create
 * @text_content: NULL-term string to write to file
 *
 * Return: 1 success otherwise -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (op == -1)
			return (-1);

	if (len > 0)
	{
		wr = write(op, text_content, len);
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}

	close(op);
	return (1);
}
