#include "main.h"
/**
 * append_text_to_file - adds text to the end of file
 * @filename: name of the file to create
 * @text_content: content of the text in question
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, k);

	return (1);
}
