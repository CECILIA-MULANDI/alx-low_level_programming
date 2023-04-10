#include "main.h"

/**
 *clear_bit - function to change bit to 0
 *@n: argument pointer to the bits
 *@index: where to change
 *Return: 1 if suceess
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitChange = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}


	bitChange <<= index;

	*n &= ~bitChange;

	return (1);
}
