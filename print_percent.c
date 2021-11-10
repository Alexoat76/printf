#include "main.h"

/**
 * print_percent - print percent
 * @c: character
 *
 * Return: 1.
 */

int print_percent(va_list c)
{
	unsigned char character;
	int ret = 0;

	character = va_arg(c, int);
	_putchar(character);
	ret++;
	return (ret);
}
