#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: character pointer
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlenc - strlen applied for constant char pointer
 * @s: character pointer
 * Return: i
 */
int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
