#include "main.h"

/**
 * main - print_revs
 *
 *
 */
int print_revs(va_list args)
{

	char *s = va_arg(args, char*);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
