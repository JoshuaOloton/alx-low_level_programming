#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t rtwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, 0_WRONLY | O_APPEND, 0666);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len]; len++)
		;
	rtwrite = write(fd, text_content, len);
	if (rtwrite == -1)
		return (-1);

	close(fd);
	return (1);
}
