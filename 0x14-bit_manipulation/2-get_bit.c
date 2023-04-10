#include "main.h"
/**
 *get_bit - function to return value of a bit
 *
 *@n: the bits
 *@index: given position
 *Return: 0 on sucess
 *
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int Value = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	Value <<= index;

	if (n & Value)
		return (1);
	return (0);
}
