#include "main.h"
/**
 * _puts - prints a string
 *Description: printing a string
 * @str: parameter
 * Returns: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
