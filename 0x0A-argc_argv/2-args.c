#include <stdio.h>
#include "main.h"
/**
 *main - function to print everything in a str on new line
 *@argc:argument
 *@argv:argument
 *Return:returns 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
