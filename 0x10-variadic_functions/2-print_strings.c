#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string
 * @n: no. of strings passed to function
 * @...: variable
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list c;
	char *string;
	unsigned int i;

	va_start(c, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(c, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(c);
}
