#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fds_r, fds_w, x, y, z;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fds_r = open(argv[1], O_RDONLY);
	if (fds_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fds_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fds_r, buff, BUFSIZ)) > 0)
	{
		if (fds_w < 0 || write(fds_w, buff, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fds_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(fds_r);
	z = close(fds_w);
	if (y < 0 || z < 0)
	{
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds_r);
		if (z < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds_w);
		exit(100);
	}
	return (0);
}
