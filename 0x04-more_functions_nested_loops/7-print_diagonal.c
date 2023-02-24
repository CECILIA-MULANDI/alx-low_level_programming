#include "main.h"
/**
 * print_diagonal - prints a diagonal
 *@n:argument
 *Return: n
 */
void print_diagonal(int n)
{
	int counter = 0;

	int end;

	int start = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (counter < n)
		{
			end = counter;
			while (start <= end)
			{
				if (start == end)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
					_putchar(' ');
				start++;
			}
			start = 0;
			counter++;
		}
	}
}


