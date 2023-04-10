#include "main.h"
#include <string.h>
/**
 *create_file - creates a file
 *@filename: pointer to file
 *@text_content: pointer to text
 *Return: integer 1
 */
int create_file(const char *filename, char *text_content)
{
	int newfile, filewrite;

	if (filename == NULL)
		return (-1);

	newfile = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (newfile == -1)
		return (-1);

	if (text_content != NULL)
	{
		filewrite = write(newfile, text_content, strlen(text_content));
		if (filewrite == -1)
		{
			close(newfile);
			return (-1);
		}

	}

	close(newfile);
	return (1);
}
