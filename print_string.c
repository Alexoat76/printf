#include "main.h"

/**
 * print_string - print string
 * @s: string to print
 *
 * Return: 1.
 */

int print_string(va_list s)
{
	unsigned char character;
	int ret = 0;

	for (ret = 0; ret != '\0'; ret++)
	{
		character = va_arg(c, int);
		_putchar(character);
		ret++;
	}
	return (ret);
}
