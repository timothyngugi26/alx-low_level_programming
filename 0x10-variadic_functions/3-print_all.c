#include "variadic_functions.h"
/**
 * print_all - print any argument provided to funstion
 * @format: the argument specifier
 *
 * Return: any argument given  based on format specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;

	char *str;
	va_list spc;

	va_start(spc, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case '1':
				printf("%d", va_arg(spc, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(ni)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != 'o' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spc);
}
