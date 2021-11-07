#include "main.h"

/**
 * _puts - prints a string
 * @string: input string
 * Return: count of string.
 */

int _puts(char *string)
{
	int i = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		i++;
	}
	return (i);
}
