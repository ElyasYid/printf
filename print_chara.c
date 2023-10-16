#include "main.h"

/**
 * prnt_ch - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int prnt_ch(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
