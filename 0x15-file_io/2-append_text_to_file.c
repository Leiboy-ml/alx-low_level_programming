#include "main.h"

/**
 * append_text_t0_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 *
 * @text_content: the string to add at the end of a file.
 *
 * Return: if the funtion fails or the file name is null - -1
 * if the file doesnt exist or the user lacks write permision - -1
 * otherwise - 1
 * */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
