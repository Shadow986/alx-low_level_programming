#include "main.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(x);
		return (0);
	}
	read_count = read(x, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(x);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(x);
		return (0);
	}
	free(buffer);
	close(x);
	return (write_count);
}
