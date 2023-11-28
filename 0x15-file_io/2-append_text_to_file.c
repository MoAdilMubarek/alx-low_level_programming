#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a file
 * @text_content: pointer
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int des;
	ssize_t size = 0, bytes;

	if (filename == NULL)
		return (-1);

	des = open(filename, O_WRONLY);

	if (des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*text_content++)
			size++;

		bytes = write(des, text_content, size);
	}
	if (bytes == -1)
		return (-1);

	close(des);
	return (size == bytes ? 1 : -1);
}


