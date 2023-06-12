#include "main.h"

/**
  * read_textfile - fct reads a text and print to POSIX
  * @filename: input
  * @letters: input
  * Return: output
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t size;
	char std[BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	size = read(fd, &std[0], letters);
	size = write(STDOUT_FILENO, &std[0], size);
	close(fd);
	return (size);
}
