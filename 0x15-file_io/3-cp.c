#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo, errClose;
	ssize_t nchars, newr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fileFrom fileTo");
		exit(97);
	}

	fileFrom = open(argv[1], O_RDONLY);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fileFrom, fileTo, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fileFrom, buff, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		newr = write(fileTo, buff, nchars);
		if (newr == -1)
			error_file(0, -1, argv);
	}

	errClose = close(fileFrom);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}

	errClose = close(fileTo);
	if (errClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	return (0);
}
