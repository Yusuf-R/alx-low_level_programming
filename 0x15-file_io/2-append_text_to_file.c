#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op_fd, wr_fd, cnt = 0;

	if (!filename)
		return (-1);

	op_fd = open(filename, O_WRONLY | O_APPEND);
	if (op_fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			cnt++;
		wr_fd = write(op_fd, text_content, cnt);
		if (wr_fd != cnt)
			return (-1);
	}

	close(op_fd);

	return (1);
}
