#include "holberton.h"
/**
 * append_text_to_file - functon that appends text at the end of a file
 * @filename: name of file to append
 * @text_content: conent to write into a file
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	sz = write(fd, text_content, strlen(text_content));
	if (sz < 0)
		return (-1);
	close(fd);
	return (1);
}
