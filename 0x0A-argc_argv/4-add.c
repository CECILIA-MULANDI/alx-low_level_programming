#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * isNumeric - check if a string is a no
 * @str:argument
 * Return: 1 on sucess
 */
int isNumeric(const char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - add two nos
 * @argc:argument
 * @argv:argument
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int count = 1;

	int sum = 0;

	while (count < argc)
	{
		if (isNumeric(argv[count]) == 0)
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);

	return (0);
}


