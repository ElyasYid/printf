#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", prnt_string}, {"%c", prnt_ch},
		{"%%", prnt_37},
		{"%i", prnt_integers}, {"%d", prnt_decimal}, {"%r", prnt_strrev},
		{"%R", prnt_rot13}, {"%b", prnt_binary}, {"%u", prnt_unsigned},
		{"%o", prnt_octal}, {"%x", prnt_hex}, {"%X", prnt_HEX},
		{"%S", prnt_exc_str}, {"%p", prnt_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
