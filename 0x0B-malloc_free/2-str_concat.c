#include "main.h"
#include <stdlib.h>
/**
 * get_len - get the length of the str
 *@s:argument
 *Return:int lenght
 */

int get_len(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i+1);
}
/**
 * str_concat - concatenates two stringss
 * @s1:argument
 * @s2:argument
 * Return:char pointer
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size;

	int s2_size;

	int i;
	int *ptr;

	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	s1_size = get_len(s1);
	s2_size = get_len(s2);

	ptr = (char *)malloc(((s1_size + s2_size) - 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	       ptr[i] = s1[i];	
	for (j = 0; s2[j] != '\0'; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}

