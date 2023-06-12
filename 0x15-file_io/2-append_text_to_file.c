#include "main.h"

/**
  * append_text_to_file - fct that appends text at the end of file
  * @filename: input
  * @text_content: input char
  * Return: output int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, size;

	size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, size);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
