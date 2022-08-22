#include "main.h"

/**
* read_textfile - a function that reads a text file and prints it to STDOUT
* @filename: the name of the file
* @letters: the number of letters it should read and print
*
* Return: returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n, n1;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	n = read(fd, buf, letters);

	n1 = write(STDOUT_FILENO, buf, n);
	if (n != n1)
		return (0);

	free(buf);
	close(fd);

	return (n);
}
