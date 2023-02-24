#include "main.h"
/**
 * print_line - prints a straight line
 * @n:argument passed
 * Return: returns n
 */
void print_line(int n)
{
	int counter = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (counter < n)
		{
			_putchar('_');
			counter++;
		}
		_putchar('\n');
	}
}

