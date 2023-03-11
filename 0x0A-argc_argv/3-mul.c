#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function to multiply two numbers
 * @argc:argument
 * @argv:argument
 * Return:0 on success
 */
int main(int argc, char *argv[])
{
	int len = argc - 1;

	if (len != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);


}
