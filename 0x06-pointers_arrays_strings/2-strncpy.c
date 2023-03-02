#include "main.h"
#include <string.h>
/**
 *_strncpy- copies a string
 *@dest:argument
 *@src:argument
 *@n:argument
 *Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1 = strlen(src);


	int i;

	for (i = 0; i <= len1; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}


