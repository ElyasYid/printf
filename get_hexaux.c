#include "main.h"

/**
 * printf_hex_aux - prints hexadecimal number.
 * @num: arguments
 * Return: count
 */
int printf_hex_aux(unsigned long int num)
{
	long int i;
	long int *arr;
	long int c = 0;
	unsigned long int t = num;

	while (num / 16 != 0)
	{
		num /= 16;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(long int));

	for (i = 0; i < c; i++)
	{
		arr[i] = t % 16;
		t /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (c);
}
