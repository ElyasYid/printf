#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int prnt_pointer(va_list val);
int _putchar(char c);
int prnt_octal(va_list val);
int prnt_integers(va_list args);
int prnt_hexex(unsigned long int num);
int prnt_HEXEX(unsigned int num);
int _strlenc(const char *s);
int prnt_HEX(va_list val);
int prnt_hex(va_list val);
int prnt_binary(va_list val);
int prnt_unsigned(va_list args);
int prnt_strrev(va_list args);
int prnt_decimal(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int rev_string(char *s);
int _strlenc(const char *s);
int prnt_37(void);
int prnt_exc_str(va_list val);
int prnt_ch(va_list val);
int prnt_string(va_list val);
int prnt_rot13(va_list args);
int _printf(const char *format, ...);

#endif
