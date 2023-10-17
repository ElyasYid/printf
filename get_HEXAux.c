#include "main.h"

/**
 * printf_HEX_aux - prints hex number.
 * @num: the number to print.
 * Return: count
 */
int printf_HEX_aux(unsigned int num)
{
	int i;
	int *arr;
	int c = 0;
	unsigned int t = num;

	while (num / 16 != 0)
	{
		num /= 16;
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
