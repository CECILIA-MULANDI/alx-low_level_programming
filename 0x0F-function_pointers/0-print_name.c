#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name- function that prints the name
 *@name:argument pointer to name
 *@f:pointer to funtion
 *Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}

