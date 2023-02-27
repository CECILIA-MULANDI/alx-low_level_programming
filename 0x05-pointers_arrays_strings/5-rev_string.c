#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	char temp;

	int j, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;
	len2 = len1 - 1;
	for (j = 0; j < len1 / 2; j++)
	{
		temp = s[j];
		s[j] = s[len2];
		s[len2] = temp;
		len2 -= 1;
	}


}

