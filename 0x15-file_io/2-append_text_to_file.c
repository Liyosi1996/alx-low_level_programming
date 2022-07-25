#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text
 * @filename: variable pointer
 * @text_content: content of a file
 * Return: always 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int j = 0, file;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[j] != '\0')
	{
		j++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, j);
	return (1);
}
