#include "main.h"
#include <string.h>
/**
 *cap_string - capitalizez letter
 *@str:argument
 *Return: str
 *
 */
char *cap_string(char *str)
{
	int strIndex;

	int len = strlen(str);

	for (strIndex = 0 ; strIndex < len; strIndex++)
	{
		while (!(str[strIndex] >= 'a' && str[strIndex] <= 'z'))
			strIndex++;
		if (str[strIndex - 1] == ' ' ||
		    str[strIndex - 1] == '\t' ||
		    str[strIndex - 1] == '\n' ||
		    str[strIndex - 1] == ',' ||
		    str[strIndex - 1] == ';' ||
		    str[strIndex - 1] == '.' ||
		    str[strIndex - 1] == '!' ||
		    str[strIndex - 1] == '?' ||
		    str[strIndex - 1] == '"' ||
		    str[strIndex - 1] == '(' ||
		    str[strIndex - 1] == ')' ||
		    str[strIndex - 1] == '{' ||
		    str[strIndex - 1] == '}' ||
		    strIndex == 0)
			str[strIndex] -= 32;
	}
	return (str);
}


