#include "main.h"
/**
 * create_array - function that returns an array of c
 * @size: argument used
 * @c:argument used
 * Return:charwhich is pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = (char *)(malloc(size * sizof(char)));
	}
	if (!arr)
	{
		return (NULL);
	}
	while (count < size)
	{
		arr[count] = c;
		count++;
	}
	return (arr)
}

