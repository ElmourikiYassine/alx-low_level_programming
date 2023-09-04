#include "main.h"

/**
 * _len - computes the length of a string
 * @str: the string to compute the length of
 *
 * Return: the length of the string
 */
int _len(char *str);

/**
 * create_file - creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	bytes_write = write(fd, text_content, _len(text_content));

	if (bytes_write == -1)
		return (-1);

	close(fd);

	return (1);
}

/**
 * _len - computes the length of a string
 * @str: the string to compute the length of
 *
 * Return: the length of the string
 */
int _len(char *str)
{
	char *c = str;
	int i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}

	return (i);
}

