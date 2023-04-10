#include "main.h"
/**
 *flip_bits - function to flip bits
 *@n:argument
 *@m:argument
 *Return:the count
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int keepCount = 0;

	unsigned long  int  theDiff = n ^ m;

	while (theDiff != 0)
	{
		keepCount += (theDiff & 1);
		keepCount >>= 1;
	}
	return (keepCount);
}

