#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *name;

	if (filename == NULL)
		return (0);

	name = malloc(sizeof(char) * letters);
	if (name == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, name, letters);
	w = write(STDOUT_FILENO, name, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(name);
		return (0);
	}

	free(name);
	close(o);

	return (w);
}
