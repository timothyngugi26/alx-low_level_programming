#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat-concatenates n bytes of a string to another string.
*
 *@s1:string to append to
 *@s2: string to concatenate from
 *@n:number of bytes from s2 to concatenate to s1
 *
 *Return: the pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, Ien1 = 0, Ien2 = 0;

	while (s1 && s1[Ien1])
		Ien1++;
	while (s2 && s2[Ien2])
		Ien2++;

	if (n < Ien2)
		s = malloc(sizeof(char) * (Ien1 + n + 1));
	else
		s = malloc(sizeof(char) * (Ien1 + Ien2 + 1));
	if (!s)
		return (NULL);
	while (i < Ien1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < Ien2 && i < (Ien1 + n))
		s[i++] = s2[j++];
	while (n >= Ien2 && i < (Ien1 + Ien2))
		s[i++] = s2[j++];
	s[i] = '\0';

	return (s);
}
