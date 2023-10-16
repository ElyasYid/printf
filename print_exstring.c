#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: arguments
 * Return: the length of the string.
 */

int printf_exc_str(va_list val)
{
	char *s;
	int i, len = 0;
	int j;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			j = s[i];
			if (j < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(j);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
