#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>


#define BUFFER_SIZE 1024

/**
 *print_error - function to print the sms for error
 *Return: void
 *@sms: argument pointer
 */
void print_error(char *sms)
{
	dprintf(STDERR_FILENO, "%s\n", sms);
}
/**
 *main - starting point of function
 *@argc: argument pointer
 *@argv:pointe too
 *Return: int
 */
int main(int argc, char *argv[])
{
	int file_from;

	int file_to;

	ssize_t BytesSize;

	char stream[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		print_error("Error: Can't read from the file");
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		print_error("Error: Can't write to file");
		exit(99);
	}

	while ((BytesSize = read(file_from, stream, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, stream, BytesSize) != BytesSize)
		{
			print_error("Error: Can't write to file");
			exit(99);
		}
	}

	if (BytesSize == -1)
	{
		print_error("Error: Can't read from the file");
		exit(98);
	}

	if (close(file_from) == -1)
	{
		print_error("Error: Can't close fd");
		exit(100);
	}
	if (close(file_to) == -1)
	{
		print_error("Error: Can't close fd");
		exit(100);
	}
	return (0);
}
