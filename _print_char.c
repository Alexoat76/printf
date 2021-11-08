#include "main.h"

/**
 * print_c - Print character.
 * @ptr: Pointer.
 * Return: A character.
 */

int _print_char(va_list ptr)
{
	_putchar(va_arg(ptr, int));
	return (1);
}
