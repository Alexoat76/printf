#include "main.h"

/**
 * _puts - prints a string
 * @ptr: input string
 * Return: count of string.
 */

int _puts(va_list ptr)
{
	int i;
	char *str;

	for (i = 0; ptr; i++)
	{
		str += ptr[i];
		_putchar(str[i]);
	}
	return (i);
}
