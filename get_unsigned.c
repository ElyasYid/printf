#include "main.h"
/**
 * printf_unsigned - prints unsigned integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int first, last = n % 10, digit, base = 1;
	int  i = 1;

	n = n / 10;
	first = n;

	if (last < 0)
	{
		_putchar('-');
		first = -first;
		n = -n;
		last = -last;
		i++;
	}
	if (first > 0)
	{
		while (first / 10 != 0)
		{
			base = base * 10;
			first = first / 10;
		}
		first = n;
		while (base > 0)
		{
			digit = first / base;
			_putchar(digit + '0');
			first = first - (digit * base);
			base = base / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
