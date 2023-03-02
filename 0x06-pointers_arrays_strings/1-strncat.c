#include "main.h"
#include <string.h>
/**
 * _strncat - joins two strings but from s2 we take n bytes
 *@dest: argument
 *@src:argument
 *@n:argument
 *Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);

	int len2 = strlen(src);

	int i;

	for (i = 0; i <= len2; i++)
	{
		if (i < n)
		{
			dest[len1 + i] = src[i];
		}
	}
	return (dest);
}

