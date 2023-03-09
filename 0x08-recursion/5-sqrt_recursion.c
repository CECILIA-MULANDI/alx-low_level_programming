#include "main.h"
/**
 *
 *
 *
 *
 */
int sqrt_helper(int n, int low, int high);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return sqrt_helper(n, 1, n);
}
int sqrt_helper(int n, int low, int high)
{
	int mid;

	int mid_squared;

	mid = (low + high) / 2;


	mid_squared = mid * mid;

	if (low > high)
	{
		return (-1);
	}


	if (mid_squared == n)
	{
		return (mid);
	}
	else if (mid_squared < n)
	{
		return (sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return sqrt_helper(n, low, mid - 1);
	}
}




