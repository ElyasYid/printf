#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int i, l;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		l = _strlen(s);
		for (i = 0; i < l; i++)
			_putchar(s[i]);
		return (l);
	}
	else
	{
		l = _strlen(s);
		for (i = 0; i < l; i++)
			_putchar(s[i]);
		return (l);
	}
}
