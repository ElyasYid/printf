#include "main.h"

/**
 * printf_rot13 - scrambles string in ROT13 format
 * @args: arguments
 * Return: count
 */
int printf_rot13(va_list args)
{
	int i, j, c = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}
