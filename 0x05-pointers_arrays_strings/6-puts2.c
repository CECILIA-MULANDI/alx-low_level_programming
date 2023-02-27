#include "main.h"
#include <string.h>
/**
 * puts2 - iterates through each character
 * @str:parameter
 * Return: void
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

