#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

void error(int e, char *filename);

/**
 * main - check the code.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, close_err;
	ssize_t nread, nwrite;
	char buf[1024];

	if (argc != 3)
		error(97, "");
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error(98, argv[1]);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		error(99, argv[2]);
	nread = 1024;
	while (nread == 1024)
	{
		nread =  read(file_from, buf, 1024);
		if (nread == -1)
			error(98, argv[1]);
		nwrite = write(file_to, buf, nread);
		if (nwrite == -1)
			error(99, argv[2]);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	return (0);
}

/**
 * error - checks if files can be opened.
 * @e: error code.
 * @filename: filename
 * Return: no return.
 */
void error(int e, char *filename)
{
	if (e == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
		exit(99);
	}
}
