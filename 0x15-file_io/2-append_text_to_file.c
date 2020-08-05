#include "holberton.h"

/**
 * append_text_to_file - main function.
 * @filename: The pointer name of the file.
 * @text_content: The string.
 *
 * Description: This function appends text at the end of a file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		{
			;
		}
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	{
		if (fd == -1)
		{
			return (-1);
		}
	}
	n = write(fd, text_content, i);
	{
		if (n == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
