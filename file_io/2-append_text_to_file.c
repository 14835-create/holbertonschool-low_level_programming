#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at end file
 * @filename: name of file
 * @text_content: NULL trm string to file
 *
 * Return: 1 = success otherwise -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
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
