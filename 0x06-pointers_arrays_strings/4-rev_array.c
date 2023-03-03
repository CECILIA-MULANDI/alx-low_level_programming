#include "main.h"
/**
 *reverse_array - reverses an array
 *@a:argument
 *@n:argument
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	int t;

	for (i = 0; i < n; i++; n--)
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t;
	}
}

