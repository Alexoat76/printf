#include "main.h"

/**
 * print_char - print char
 * @c: character
 *
 * Return: 1.
 */


int print_char(va_list c)
{
	unsigned char character;
	int ret = 0;

	character = va_arg(c, int);
	_putchar(character);
	ret++;
	return (ret);
}
