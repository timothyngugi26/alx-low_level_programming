#include "main.h"
#include <stdio.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return:0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, 1 = 0;
	char *str;
	
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			1++;
	}
	1 += ac;
	str = malloc(sizeof(char) * I + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n];
	{
		str[r] = av[i][n];
		r++;
		}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	return (str);

}
		'

