#include "main.h"
/**
 * _strcpy - copies a str from one destination to another
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	int i;

	while (*src)
	{
		src++;
		counter++;
	}
	for (i = 0; i < counter; i++)
		src--;
	for (i = 0; i < counter; i++)
	{
		dest[i] = *src;
		src++;
	}
	dest[i] = *src;
	return (dest);
}
