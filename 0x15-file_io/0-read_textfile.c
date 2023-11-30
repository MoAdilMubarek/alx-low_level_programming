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
	int readed_chars, written_chars;
	char buff[250];

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	readed_chars = read(file_descriptor, &buff[0], letters);
	if (readed_chars == -1)
		return (0);

	written_chars = write(1, &buff[0], readed_chars);
	if (written_chars == -1 || written_chars != readed_chars)
		return (0);

	close(file_descriptor);

	return (readed_chars);
}
