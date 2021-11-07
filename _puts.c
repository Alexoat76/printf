#include "main.h"

/**
 * _puts - prints a string
 * @string: input string
 * Return: count of string.
 */

int _puts(char *string)
{
	int i = 0;

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		i++;
	}
	return (i);
}
