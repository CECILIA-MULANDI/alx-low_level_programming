#include "main.h"

/**
 * times_table - it print the 9 timestable
 * Return: return nothing
 */
void times_table(void)
{
	int num, b, product;

	for (num = 0; num <= 9; num++)
	{

		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			product = num * b;
			_putchar(44);
			_putchar(32);
			if (product <= 9)
			{
				_putchar(32);
				_putchar(product + 48);
			}
			else
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}
		_putchar('\n');
	}
}


