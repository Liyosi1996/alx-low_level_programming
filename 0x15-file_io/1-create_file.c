#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates afile
 * @filename: variable name
 * @text_content: content of the file
 * Return: always 0
*/

int create_file(const char *filename, char *text_content)
{
	int j = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[j] != '\0')
	{
		j++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, j);

	return (1);
}
