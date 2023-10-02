#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t nerd, newr;
	char *buff;

	if (!filename)
		return (0);
	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	nerd = read(filed, buff, letters);
	newr = write(STDOUT_FILENO, buff, nerd);
	close(filed);
	free(buff);

	return (newr);
}
