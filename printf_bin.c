#include "main.h"

/**
 * main - print_bin
 *
 *
 */

int print_bin(va_list val)
{
	int flags = 0;
	int con = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flags)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			con++;
		}
	}
	if (con == 0)
	{
		con++;
		_putchar('0');
	}
	return (con);
}
