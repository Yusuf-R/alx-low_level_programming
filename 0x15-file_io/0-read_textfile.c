#include "main.h"


/**
 * read_textfile - function reads a text file and prints it
 * to POXIS standard output
 *
 * @filename: the pointer to the file
 * @letters: The number of letters to copy
 * Return: an unsigned int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op_fd, rd_fd, wr_fd;
	char *buff;

	if (filename == NULL)
		return (0);
	op_fd = open(filename, O_RDONLY);
	if (op_fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	rd_fd = read(op_fd, buff, letters);
	if (rd_fd == -1)
	{
		free(buff);
		return (0);
	}
	buff[rd_fd] = '\0';
	close(op_fd);
	wr_fd = write(STDOUT_FILENO, buff, rd_fd);
	if (wr_fd == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (wr_fd);
}
