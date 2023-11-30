#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int des;
	ssize_t bytes, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content !== NULL)
	{
		while (*text_content++)
			size++;
	}

	des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (des < 0)
		return (-1);

	if (size)
		bytes = write(des, text_content, size);

	close(des);

	return (bytes == size ? 1 : -1);

}
