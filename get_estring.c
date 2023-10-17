#include "main.h"

/**
 * printf_exclusive_string - prints exclusive strings.
 * @val: argument
 * Return: length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *p;
	int i, l = 0;
	int c;

	p = va_arg(val, char *);
	if (p == NULL)
		p = "(null)";
	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] < 32 || p[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			l = l + 2;
			c = p[i];
			if (c < 16)
			{
				_putchar('0');
				l++;
			}
			l = l + printf_HEX_aux(c);
		}
		else
		{
			_putchar(p[i]);
			l++;
		}
	}
	return (l);
}
