#include "main.h"
/**
 * puts_half - split the str into half
 * @str: parameter
 * Returns: void
*/
void puts_half(char *str)
{
	int counter = 0, j;

	while (*str)
	{
		counter++;
		str++;
	}
	for (j = 0; j < counter; j++)
		str--;
	j = (counter % 2 == 0) ? counter / 2 : (counter + 1) / 2;

	for (; j < counter; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

