#include "main.h"
/**
 * print_diagsums - prints sums of two iagonals
 *@a:argument
*@size:argument
*Return:voi
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i != size * size - 1)
		{
			sum2 += a[i];
		}
	}
	printf("Sum of diagonal 1: %d\n", sum1);
	printf("Sum of diagonal 2: %d\n", sum2);
}

