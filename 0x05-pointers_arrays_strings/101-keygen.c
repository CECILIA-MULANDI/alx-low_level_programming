#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - randomizes password
 * Return: sucess 0
 */
int main(void)
{
	char password[100];

	int i  = 0;

	int sum = 0;

	int first;

	int second;

	while (sum < 2772)
	{
		password[i] = 33 + rand()% 94;
		sum = sum + password[i++];
	}
	password[i] = '\0';

	if (sum != 2772)
	{
		first = (sum -2772) / 2;
		second = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
		{
			first++;
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= first)
			{
				password[i] = password[i] - first;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + second))
			{
				password[i] = password[i] - second;
				break;
			}
		}
	}
	printf("%s",password);
	return (0);
}
