#include "main.h"
/**
 *_isupper - checks if letter is upper case
 *@c: argument used
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	int begin = 65;

	int end = 90;

	if (c >= begin && c <= end)
		return (1);
	else
		return (0);


}

