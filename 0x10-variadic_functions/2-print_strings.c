#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - print strings passed to a function
 *as parameter
 * @separator: separator between the two strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	 unsigned int i;
	 char *str;

	 va_list ptr_str;

	 va_start(ptr_str, n);

		for (i = 0; i < n; i++)
		{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		}
		printf("\n");
		va_end(ptr_str);
}

