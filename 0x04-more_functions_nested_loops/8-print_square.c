#include "main.h"
/**
 * print_square - prints a square
 * @size: argument
 * Return: int size
 */
void print_square(int size)
{
	int counter = 0;

	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			while (counter < size)
			{
				_putchar('#');
				counter++;
			}
			counter = 0;
			_putchar('\n');
		}
	}
}
