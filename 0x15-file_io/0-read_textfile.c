#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>


/**
 *read_textfile - function that reads file
 *
 *@filename: pointer to file
 *@letters: the number of letters to be read
 *Return: actual no of letters
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *stream = (char *)malloc(letters * sizeof(char));
	int  file = open(filename, O_RDONLY);

	ssize_t stream_read = read(file, stream, letters);
	ssize_t stream_write = write(STDOUT_FILENO, stream, stream_read);

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);



	if (stream_read == -1)
	{
		free(stream);
		close(file);
		return (0);
	}


	if (stream_write == -1 || stream_write != stream_read)
	{
		free(stream);
		close(file);
		return (0);
	}

	free(stream);
	close(file);
	return (stream_write);
}

