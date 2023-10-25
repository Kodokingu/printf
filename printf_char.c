#include "main.h"

/**
 * main - print_c
 */

int print_char(va_list val)

{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);

}
