#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to read
 * @letters: size of letters
 * Return: the size of letters:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t sz;
	int fd;
	char *c;

	c = (char *) malloc(letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	sz = read(fd, c, letters);
	write(1, c, sz);
	close(fd);
	return (sz);
}
