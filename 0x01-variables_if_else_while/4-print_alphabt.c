#include<stdio.h>
/**
 * main -  prints the alphabet except q and e using putchat function
 * Return: 0 sucessfly
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
