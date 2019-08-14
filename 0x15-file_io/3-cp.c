#include "holberton.h"
#include <stdio.h>
/**
 * check_error - verifycate if a files have error
 * @file1: first file
 * @file2: seconde file
 * @av: array of arguments
 */
void check_error(int file1, int file2, char *av[])
{
	if (file1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", av[1]);
		exit(98);
	}
	if (file2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file  %s\n", av[2]);
		exit(99);

	}

}
/**
 * main - program that copies the contentof a file to another file
 * @ag: count of arguments
 * @av: array of arguments
 * Return: Always 0.
 */
int main(int ag, char **av)
{
	int fd, fd1;
	char c[1024];
	ssize_t sz, error;

	if (ag != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	check_error(fd, fd1, av);

	sz = read(fd, c, 1024);
	write(fd1, c, sz);

	error = close(fd);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	error = close(fd1);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	return (0);


}
