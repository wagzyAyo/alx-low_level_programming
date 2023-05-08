#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: The text file to append
 * @text_content: The text to add at the end of the text file
 *
 * Return: return -1 if the function fails , 1 if the function is successful
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
