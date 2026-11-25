
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_separator - prints separator when needed
 * @printed: indicates if a value was printed
 */
void print_separator(int *printed)
{
	if (*printed)
		printf(", ");

	*printed = 1;
}

/**
 * print_all - prints different types of arguments
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;
	char *str;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			print_separator(&printed);
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			print_separator(&printed);
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			print_separator(&printed);
			printf("%f", va_arg(args, double));
			break;
		case 's':
			print_separator(&printed);
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

