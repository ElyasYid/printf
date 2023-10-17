#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
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

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int first, last = n % 10, digit;
	int  i = 1;
	int base = 1;

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
