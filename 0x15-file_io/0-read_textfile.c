#include "main.h"

/**
 * read_textfile - reads and print file
 * @filename: char
 * @letters: size_t
 * Return: ssize_t.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdesc;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fdesc = open(filename, O_RDONLY);

	if (fdesc == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
	{
		return (0);
	}

	nrd = read(fdesc, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fdesc);
	free(buf);

	return (nwr);
}
