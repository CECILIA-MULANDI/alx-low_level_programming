#include <stdio.h>
/**
 * main - prints fizzBuzz program
 * Return: 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		putchar(i == 100 ? '\n' : ' ');
	}
	return (0);
}
