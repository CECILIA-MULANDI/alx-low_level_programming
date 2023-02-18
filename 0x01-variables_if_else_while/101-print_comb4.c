#include <stdio.h>

/**
 *main -uses putchar to display different combinations of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int z, k, l;

	for (z = 48; z < 58; z++)
	{
		for (k = 49; k < 58; k++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > k && k > z)
				{
					putchar(z);
					putchar(k);
					putchar(l);
					if (z != 55 || k != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
