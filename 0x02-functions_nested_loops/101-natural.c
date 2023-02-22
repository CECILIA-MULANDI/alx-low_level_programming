#include <stdio.h>
/**
 * main - prints every natural numbers below 1024
 *that is a multiplies of 3 or 5
 *Return: 0 sucess.
 */
int main(void)
{
	int num;

	int sum = 0;

	for (num = 1; num < 1024; a++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

