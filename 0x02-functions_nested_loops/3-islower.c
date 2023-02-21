#include "main.h"
/**
 * _islower(int c)-checks for lowercase character
 *@c: argument
 * Return: 1 if c is lowercase else 0
 *
*/
int _islower(int c)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c >= lower)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

}
