#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to a file
 * @letters: int
 * Return: number of letters it could read and print, or 0 when fall
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	size_t readed_chars;
	char buff[250];

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, 4);
	if (file_descriptor < 0)
		return (0);

	readed_chars = read(file_descriptor, &buff[0], letters);
	write(1, &buff[0], readed_chars);

	close(file_descriptor);

	return (readed_chars);
}
