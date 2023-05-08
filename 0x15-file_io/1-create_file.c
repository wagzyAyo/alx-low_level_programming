#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of file to create
 * @text_content:string to write to the file
 *
 * Return:return 1 on success, -1 if failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fh, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fh, text_content, len);

	if (fh == -1 || i == -1)
		return (-1);

	close(fh);

	return (1);
}
