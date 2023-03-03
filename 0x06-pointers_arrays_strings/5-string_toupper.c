#include "main.h"
#include <string.h>
/**
 *string_toupper - convert lower to upper case
 *@str:argument
 *Return: str
 */
char *string_toupper(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		while (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}


