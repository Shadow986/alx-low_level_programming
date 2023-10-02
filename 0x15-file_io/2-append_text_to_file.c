#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	int y;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(x);
		return (1);
	}

	y = 0;
	while (text_content[y])
		y++;

	bytes_written = write(x, text_content, y);

	if (bytes_written == -1)
	{
		close(x);
		return (-1);
	}

	close(x);
	return (1);
}
