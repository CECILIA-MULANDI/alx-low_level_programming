#include "main.h"
#include <string.h>
/**
 *append_text_to_file - adds text to a file
 *@filename:pointer to file
 *@text_content: pointer to text
 *
 *Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *filepointer = fopen(filename, "a");

	if (filename == NULL)
		return (-1);

	if (filepointer == NULL)
		return (-1);

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		fwrite(text_content, sizeof(char), len, filepointer);
	}

	fclose(filepointer);

	return (1);
}
