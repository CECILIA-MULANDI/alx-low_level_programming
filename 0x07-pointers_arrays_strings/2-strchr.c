#include "main.h"
#include <string.h>
/**
 * _strchr - return location of a  char
 * @s:argument
 * @c:argument
 * Return:pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
