#include "main.h"
/**
 * _memset - replace n bytes of memory with certain value
 * @s:argument
 * @b:argument
 * @n:argument
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}	
