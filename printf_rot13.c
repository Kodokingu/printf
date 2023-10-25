#include "main.h"
/**
 * main - print_rot13
 *
 *
 */
int print_rot13(va_list args)
{
	int a, b, counter = 0;
	int c = 0;
	char *s = va_arg(args, char*);
	char d[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char e[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		c = 0;
		for (b = 0; d[b] && !c; b++)
		{
			if (s[a] == d[b])
			{
				_putchar(e[b]);
				counter++;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(s[a]);
			counter++;
		}
	}
	return (counter);
}
