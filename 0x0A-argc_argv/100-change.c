#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - argument
*@argc:argument
*@argv:argument
*Return:int
*/
int main(int argc, char *argv[])
{

	int coins[] = {25, 10, 5, 2, 1};

	int i, res, num;

	res = 0;

	num = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}

