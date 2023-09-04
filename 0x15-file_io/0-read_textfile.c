#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	ssize_t bytes_write;
	char *buffer;
	int fd = open(filename, O_RDONLY);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (fd == -1 || filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
		return (0);

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_write == -1 || bytes_read != bytes_write)
		return (0);

	free(buffer);

	close(fd);

	return (bytes_read);
}

