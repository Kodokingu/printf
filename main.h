#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - struct format - converter for printf
 *
 *
 */

typedef struct form
{
	char *ab;
	int (*func)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_uns(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *str);
int print_HEX_extra(unsigned int num);
int print_excstring(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_bin(va_list val);
int print_revs(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int _strlen(char *str);
int rev_string(char *str);
int print_38(void);
int print_char(va_list val);
int print_str(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
