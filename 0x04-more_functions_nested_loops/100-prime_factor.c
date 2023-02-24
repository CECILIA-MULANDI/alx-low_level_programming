#include <stdio.h>
/**
 * prime_factors- function to get prime numbers
 * Description: gets the largest prime number
 * @num: argument
 */
void prime_factors(long num)
{
	long divisor = 2;

	while (divisor != num)
	{
		if (num % divisor == 0)
		{
			num /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", num);
}
/**
 * main(void)-starting point
 * Return: 0
 */
int main(void)
{
	prime_factors(612852475143);
	return (0);
}

