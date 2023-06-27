#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	if (s == NULL)
		return; /* Handle null pointer */

	/* Find the length of the string */
	int length = 0;
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse */
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n'); /* Print a new line */
}

