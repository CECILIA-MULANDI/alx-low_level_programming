#include "main.h"
/**
 *binary_to_uint - function to convert to uint
 *
 *@b: pointer to binary no
 *
 *Return: the result after conversion
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedNo = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		convertedNo = (convertedNo << 1) + (*b - '0');
		b++;
	}
	return (convertedNo);
}


