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

	if (!filename)
		return (-1);

	if (!text_content)
		size = 0;
	else
	{
		while (*text_content++)
			size++;
	}

	des = open(filename, 0_WRONLY | 0_CREAT | O_TRUNC, S_IRUSR, S_IWUSR);
	if (des < 0)
		return (-1);

	if (size)
		bytes = write(des, text_content, size);

	close(des);

	return (bytes == len ? 1 : -1);

}
