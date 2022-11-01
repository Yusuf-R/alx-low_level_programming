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
	ssize_t cnt;
	int op_fd, rd_fd, i;
	char *buff;

	i = cnt = 0;
	if (filename == NULL)
		return (0);
	op_fd = open(filename, O_RDWR, 0);
	if (op_fd == -1)
		return (0);
	buff = malloc(sizeof(char *) * letters);
	if (buff == NULL)
		return (0);
	rd_fd = read(op_fd, buff, letters);
	if (rd_fd == -1)
		return (0);
	buff[letters] = '\0';

	while (buff[i])
	{
		_putchar(buff[i]);
		cnt++;
		i++;
	}

	close(op_fd);
	close(rd_fd);
	free(buff);
	return (cnt);

}
