include "main.h"
/**
 *print_times_table - gives  the n mult table
*@n: argument given
 *Return: void
 */
void print_times_table(int n)
{
	int num, x, product;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (x = 1; x <= n; x++)
			{
				product = num * x;
				_putchar(44);
				_putchar(32);
				if (product <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(product + 48);
				}
				else if (product <= 99)
				{
					_putchar(32);
					_putchar((product / 10) + 48);
					_putchar((product % 10) + 48);
				}
				else
				{
					_putchar(((product / 100) % 10) + 48);
					_putchar(((product / 10) % 10) + 48);
					_putchar((product % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}


