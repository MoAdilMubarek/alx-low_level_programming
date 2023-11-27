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
	char buff[100];

	if (*filename == NULL)
		return (0);

	file_descriptor = open(filename, 0_RDWR);
	if (file_descritor < 0)
		return (0);

	ssize_t readed_chars = read(fie_descriptor, buff, letters);
	if (readed_chars != letters)
		return (0);

	printf("%s", buff);

	close(file_descriptor);

	return (readed_chars);
}	
