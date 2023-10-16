#include "main.h"

/**
 * print_string- prints string
 * @val: argument
 * Return: length of the string
 */

int print_string(va_list val)
{
	char *STR;
	int x;
	int leng;

	STR = va_arg(val, char *);
	if (STR == NULL)
	{
		STR = "(null)";
		leng = strlen(STR);
		for (x = 0; x < leng; x++)
			_putchar(STR[x]);
		return (leng);
	}
	else
	{
		leng = strlen(STR);
		for (x = 0; x < leng; x++)
			_putchar(STR[x]);
		return (leng);
	}
}
