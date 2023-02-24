#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: the argument used
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	int start = 48;

	int end = 57;

	if (c >= start && c <= end)
	{
		return (1);
	}
	else
		return (0);
}

