#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i;

	int counter = 0;

	while (counter < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i > 9 ? (i / 10) + '0' : i + '0');
			if (i > 9)
				_putchar((i % 10) + '0');
		}
		_putchar('\n');
		counter++;
	}
}

