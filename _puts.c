#include "main.h"

/**
 * _puts - prints a string
 * @ptr: input string
 * Return: count of string.
 */

int _puts(char *ptr)
{
	int i;

	for (i = 0; ptr; i++)
	{
		_putchar(*ptr);
		ptr++;
	}
	return (i);
}
