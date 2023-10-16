#include "main.h"

/**
 * print_int- prints integers
 * @argu: arguments to print
 * Return: number of characters printed
 */

int print_int(va_list argu)
{
	int num = va_arg(argu, int);
	int first, last = num % 10, intgr, y = 1;
	int x = 1;

	num = num / 10;
	first = num;

	if (last < 0)
	{
		_putchar('-');
		first = -first;
		num = -num;
		last = -last;
		x++;
	}
	if (first > 0)
	{
		while (first /10 != 0)
		{
			y *= 10;
			first /= 10;
		}
		first = n;
		while (y > 0)
		{
			intgr = first / y;
			_putchar(intgr + '0');
			first = first - (intgr * y);
			y /= 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}
#include "main.h"

/**
 * print_dec- prints decimal
 * @argu: arguments to print
 * Return: number of characters printed
 */

int print_dec(va_list argu)
{
	int num = va_arg(argu, int);
	int first, last = num % 10, intgr, y = 1;
	int x = 1;

	num = num / 10;
	first = num;

	if (last < 0)
	{
		_putchar('-');
		first = -first;
		num = -num;
		last = -last;
		x++;
	}
	if (first > 0)
	{
		while (first /10 != 0)
		{
			y *= 10;
			first /= 10;
		}
		first = n;
		while (y > 0)
		{
			intgr = first / y;
			_putchar(intgr + '0');
			first = first - (intgr * y);
			y /= 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}
