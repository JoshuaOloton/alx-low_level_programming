#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

void error(int e, char *argv[]);

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
		error(97, argv);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error(98, argv);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		close(file_from);
		error(99, argv);
	}
	nread = 1024;
	while (nread == 1024)
	{
		nread =  read(file_from, buf, 1024);
		if (nread == -1)
			error(98, argv);
		nwrite = write(file_to, buf, nread);
		if (nwrite == -1)
			error(99, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

/**
 * error - check if file can be opened
 * @e: error code.
 * @argv: filename
 * Return: no return.
 */
void error(int e, char *argv[])
{
	if (e == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
