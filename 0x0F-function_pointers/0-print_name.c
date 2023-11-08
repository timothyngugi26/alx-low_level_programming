#include<stddef.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints name
 *
 * @f: variabe to hold the string name
 * @name:the name  of the person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);

}

