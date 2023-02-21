#include "main.h"
/**
 * jack_bauer - prints eery minute of the day
 * Return: nothing is returned
 */
void jack_bauer(void)
{
	int start = 0, startend = 23, secondstart = 0, end = 59;

	while (start <= startend)
	{
		while (secondstart <= end)
		{
			_putchar(start < 9 ? 0 + '0' : start / 10 + '0');
			_putchar(start < 9 ? start + '0' : start % 10 + '0');
			_putchar(':');
			_putchar(secondstart < 9 ? 0 + '0' : secondstart / 10 + '0');
			_putchar(secondstart < 9 ? secondstart + '0' : secondstart % 10 + '0');
			secondstart++;
		}
		secondstart = 0;
		start++;
	}
}
