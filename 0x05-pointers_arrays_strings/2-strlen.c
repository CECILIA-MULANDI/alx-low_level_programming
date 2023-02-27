#include "main.h"
/**
 * _strlen- return the length of the string
 * Description - return length of a string
 * @s:parameter
 * Return: returns an int
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
