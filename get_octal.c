#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @val: argument
 * Return: count
 */
int printf_oct(va_list val)
{
	int i;
	int *arr;
	int c = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / 8 != 0)
	{
		n /= 8;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(int));

	for (i = 0; i < c; i++)
	{
		arr[i] = t % 8;
		t /= 8;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (c);
}
