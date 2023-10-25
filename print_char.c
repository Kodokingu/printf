#include "main.h"

/**
 * main - print_c
 */

int print_c(va_list val)

{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);

}
