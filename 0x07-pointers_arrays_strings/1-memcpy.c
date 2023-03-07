#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest:argument
 * @src:argument
 * @n:argument
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*p++ = *src++;
	return (dest);
}
