#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message to POSIX standard error and exit
 * @code: The exit code
 * @message: The error message to print
 * @file_name: The file name to include in the error message
 */
void print_error(int code, const char *message, const char *file_name)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
	exit(code);
}

/**
 * main - Copies the content of one file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp", "file_from file_to");

	
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error(98, "Error: Can't read from file", argv[1]);

	
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		print_error(99, "Error: Can't write to", argv[2]);

	
	while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(file_to, buffer, read_count);
		if (write_count != read_count)
			print_error(99, "Error: Can't write to", argv[2]);
	}

	if (read_count == -1)
		print_error(98, "Error: Can't read from file", argv[1]);

	
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}

