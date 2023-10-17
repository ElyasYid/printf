#include "main.h"

/**
 * printf_HEX - prints hex number.
 * @val: arguments
 * Return: count
 */
int printf_HEX(va_list val)
{
	int i;
	int *arr;
	int c = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / 16 != 0)
	{
		n /= 16;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(int));

	for (i = 0; i < c; i++)
	{
		arr[i] = t % 16;
		t /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (c);
}
