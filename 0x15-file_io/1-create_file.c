#include "main.h"
/**
 * create_file - creates the file in question
 * @filename: name of file yet to be created
 * @text_content: text content of the file
 * Return: the newly created file
 */

int create_file(const char *filename, char *text_content)
{
	int k = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[k] != '\0')
	{
		k++;
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, k);

	return (1);
}
