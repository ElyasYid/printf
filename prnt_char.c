#include "main.h"

/**
 * printf_char- prints character
 * @val: arguments
 * Return: 1
 */

int printf_char(va_list val)
{
	char CHAR;

	CHAR = va_arg(val, int);
	_putchar(CHAR);
	return (1);
}
