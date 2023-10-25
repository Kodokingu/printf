#include "main.h"

/**
 * main - _printf
 *
 */

int _printf(const char *format, ...);
{
	convert a[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_38},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_uns},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_excstring}, {"%p", print_pointer}

	}

	va_list args;
	int i = 0, length = 0;
	int j

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ab[0] == format[i] && p[j].ab[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
