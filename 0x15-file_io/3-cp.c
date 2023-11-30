#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 1 or -1
 */

int main(int argc, char *argv[])
{
	char *source_file, *dest_file, *err97, *err98, *err99, *err100;
	int des_1, des_2, i = 0;
	char buff[1024];
	ssize_t readed_bytes, written_bytes;

	if (argc != 3)
	{
		err97 = "Usage: cp file_from file_to\n";
		while (*err97++)
			i++;
		write(2, err97, i);
		exit(97);
	}

	source_file = argv[1];
	des_1 = open(source_file, O_RDONLY);
	if (des_1 == -1)
	{
		err98 = "Error: Can't read from file NAME_OF_THE_FILE\n";
		while (*err98++)
			i++;
		write(2, err98, i);
		exit(98);
	}

	dest_file = argv[2];
	des_2 = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR,
	S_IRGRP | S_IWGRP, S_IROTH);
	if (des_2 == -1)
	{
		err99 = "Error: Can't write to NAME_OF_THE_FILE\n";
		while (*err99++)
			i++;
		write(2, err99, i);
		exit(99);
	}

	while ((readed_bytes = read(des_1, &buff[0], 1024)) > 0)
	{
		written_bytes = write(des_2, &buff[0], readed_bytes);
	}
	
	if (written_bytes == -1 || written_bytes != readed_bytes)
	{
		err99 = "Error: Can't write to NAME_OF_THE_FILE\n";
		while (*err99++)
			i++;
		write(2, err99, i);
		exit(99);
	}
	if (close(des_1) == -1)
	{
		err100 = "Error: Can't close fd FD_VALUE\n";
		while (*err100++)
			i++;
		write(2, err100, i);
		exit(100);
	}
	if (close(des_2) == -1)
	{
		err100 = "Error: Can't close fd FD_VALUE\n";
		while (*err100++)
			i++;
		write(2, err100, i);
		exit(100);
	}
	return (0);
	
}
