#include <main.h>

/**
 * print_char - print a character
 * @c: character
 *
 * Return: 1.
 */

int print_char(va_list c)
{
	unsigned char character;

	character = va_arg(c, int);
	_putchar(character);
	return (1);
}
