#include "main.h"
/**
 * int _islower(int c)-checks for lowercase character
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
*/
int _islower(int c)
{

	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if(c >= lower )
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

}


	



