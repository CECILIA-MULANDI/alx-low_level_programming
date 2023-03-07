#include "main.h"
#include <string.h>
/**
 *_strstr - locates a substring
 *@haystack:argument
 *@needle:argument
 *Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		k = i;

		while (needle[j] != '\0' && haystack[k] == needle[j])
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

	}
	return (NULL);
}
