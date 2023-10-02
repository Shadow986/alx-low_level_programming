#include "main.h"

char *allocate_buffer(char *y);
void close_file_descriptor(int x);

/**
 * allocate_buffer - a function that
 * Allocates 1024 bytes of memory for a buffer.
 * @y: The name of the file the buffer is storing characters for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *y)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't allocate memory for file %s\n", y);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file_descriptor - a function that closes a file descriptor.
 * @x: The file descriptor to be closed.
 */
void close_file_descriptor(int x)
{
	int close_status;

	close_status = close(x);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", x);
		exit(100);
	}
}

/**
 * main - a function that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_status, write_status;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	read_status = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_status == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_status = write(file_to, buffer, read_status);
		if (file_to == -1 || write_status == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_status = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_status > 0);

	free(buffer);
	close_file_descriptor(file_from);
	close_file_descriptor(file_to);

	return (0);
}
