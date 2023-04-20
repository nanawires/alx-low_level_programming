#include "main.h"

/**
 * read_textfile - reads text and prints to standard output
 * @filename: name of file in memory
 * @letters: output the letters
 * Return: number of actual letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, k;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(txt);
		return (0);
	}

	let = read(file, txt, letters);
	k = write(STDOUT_FILENO, txt, let);
	close(file);

	return (k);
}
