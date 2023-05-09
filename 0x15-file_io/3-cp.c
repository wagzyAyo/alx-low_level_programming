#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * crete_buffer - Allocate 1024 bytes for buffer.
 * @file: The name of the file
 *
 * Return: A pointer to new allocated buffer
 **/
char *create_buffer(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (buff);
}

/**
 * close_file - close file descriptors.
 * @fh:The file descriptor to be closed
 **/
void close_file(int fd)
{
	int u;

	u = close(fd);

	if (u == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



/**
 * main - copies the contents of a file to another
 * @argc: The number of arguments passed
 * @argv: an array of pointers
 *
 * Return: 0 if successful
 **/
int main(int argc, char *argv[])
{
	int f, t, a, b;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	a = read(f, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		b = write(t, buff, a);
		if (t == -1 || b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		a = read(f, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

free(buff);
close_file(f);
close_file(t);

return (0);
}
