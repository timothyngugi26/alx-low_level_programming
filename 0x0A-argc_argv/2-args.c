#include <stdio.h>

/**
 * main - print all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program's command line args.
 * Return: 0 when successful.
 **/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
