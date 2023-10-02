#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len = 0;
	int x;

	if (filename == NULL)
		return (-1);
	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = write(x, text_content, strlen(text_content));
		if (len == -1)
			return (-1);
	}
	close(x);
	return (1);
}
