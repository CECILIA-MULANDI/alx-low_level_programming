#include "main.h"

/**
 * print_number - print number
 * @n: argument
 * Return: 0
 */

void print_number(int n)
{
	unsigned int no;

	no = n;

	if (n < 0)
	{
		_putchar('-');
		no = -n;
	}

	if (no / 10 != 0)
	{
		print_number(no / 10);
	}
	_putchar((no % 10) + '0');
}


