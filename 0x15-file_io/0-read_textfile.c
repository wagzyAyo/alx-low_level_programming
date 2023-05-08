#include "main.h"
/**
 * read_textfile - reads text file and prints to the POSIX standard output
 * @filename: The file to read
 * @letters: number of letters to be read
 *
 * Return:The actual number of letters it could read and write
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer[];
	ssize_t fh;
	ssize_t i;
	ssize_t j;

	fh = open(filename, O_RDONLY);
	if (fh == -1)
		return (0);
	buffer = malloc(sizeof(char) *letters);
	j = read(fh , buffer , letters);
	i = write(STDOUT_FILENO , buffer , j);

	free(buffer);
	close(fh);
	return (i);
}
