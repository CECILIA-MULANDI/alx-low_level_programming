#include "main.h"
/**
 *_sqrt_recursion- function to get sqrt
 *@n:argument
 *Return: int type
 *@i:argument
 */
int _sqrt_helper(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}
/**
*_sqrt_helper - function
 * @n:argument
 *@i:argument
 * Return: of type int
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}

