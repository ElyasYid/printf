#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments
 * Return: 1
 */
int printf_bin(va_list val)
{
	int x = 0;
	int y = 0;
	int i, a = 1, b;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & n);
		if (p >> (31 - i))
			x = 1;
		if (x)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			y++;
		}
	}
	if (y == 0)
	{
		y++;
		_putchar('0');
	}
	return (y);
}
