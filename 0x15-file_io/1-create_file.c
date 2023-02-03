#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op_fd, wr_fd, cnt = 0;

	if (!filename)
		return (-1);

	op_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op_fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[cnt])
			cnt++;
		wr_fd = write(op_fd, text_content, cnt);
		if (wr_fd != cnt)
			return (-1);
	}

	close(op_fd);

	return (1);
}
