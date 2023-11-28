#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 1 or -1
 */

int main(int argc, char *argv[])
{
	char *err97, *err98, *err99, *err100;
	int des_1, des_2;
	char buff[1024];
	ssize_t readed_bytes, written_bytes;

	if (argc != 3)
	{
		err97 = "Usage: cp file_from file_to\n";
		write(2, err97, 28);
		exit(97);
	}

	des_1 = open(argv[1], O_RDONLY);
	if (des_1 == -1)
	{
		err98 = "Error: Can't read from file NAME_OF_THE_FILE\n";
		write(2, err98, 50);
		exit(98);
	}

	des_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR,
	S_IRGRP | S_IWGRP, S_IROTH);

	while ((readed_bytes = read(des_1, buff, sizeof(buff))) > 0)
	{
		written_bytes = write(des_2, buff, readed_bytes);
	}
	
	if (written_bytes == -1 || written_bytes != readed_bytes)
	{
		err99 = "Error: Can't write to NAME_OF_THE_FILE\n";
		write(2, err99, 50);
		exit(99);
	}
	if (close(des_1) == -1 || close(des_2) == -1)
	{
		err100 = "Error: Can't close fd FD_VALUE\n";
		write(2, err100, 50);
		exit(100);
	}
	return (0);
	
}
