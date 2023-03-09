#include "main.h"

/**
 * _strlen - gets length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: argument
 * @len: argument
 * @index: argument
 *
 * Return: of type int
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s:argument
 *
 * Return: of type int
  */
int is_palindrome(char *s)
{
	int index = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
