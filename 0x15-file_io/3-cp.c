#include "main.h"

/**
 * _custom_exit - Custom exit function with error messages
 * @error: Error code
 * @file: File name or description
 * @fd: File descriptor (optional)
 */
void _custom_exit(int error, const char *file, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		break;
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		break;
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		break;
	default:
		break;
	}
	exit(error);
}

/**
 * copyFile - Copies the content of one file to another
 * @src: Source file name
 * @dest: Destination file name
 */
void copyFile(const char *src, const char *dest)
{
	int fd, fd5, close_fd, close_fd5;
	ssize_t bytes_write, bytes_read;
	char buffer[1024];
	mode_t permissions = 0664;

	fd = open(src, O_RDONLY);
	if (fd == -1)
		_custom_exit(98, src, STDERR_FILENO);

	fd5 = open(dest, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd5 == -1)
	{
		close(fd);
		_custom_exit(99, dest, STDERR_FILENO);
	}

	while ((bytes_read = read(fd, buffer, sizeof(buffer))) != 0)
	{
		if (bytes_read == -1)
		{
			close(fd);
			close(fd5);
			_custom_exit(98, src, STDERR_FILENO);
		}
		bytes_write = write(fd5, buffer, bytes_read);
		if (bytes_write == -1)
		{
			close(fd);
			close(fd5);
			_custom_exit(99, dest, STDERR_FILENO);
		}
	}

	close_fd = close(fd);
	if (close_fd == -1)
		_custom_exit(100, src, fd);

	close_fd5 = close(fd5);
	if (close_fd5 == -1)
		_custom_exit(100, dest, fd5);
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument strings
 * Return: 0 on success, 1 on failure
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		_custom_exit(97, NULL, 0);
	}

	copyFile(av[1], av[2]);

	return (0);
}

