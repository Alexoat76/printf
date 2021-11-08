#include "main.h"

/**
 * _printf - Function that prints anything.
 * @format: character string  composed of zero or more directives
 * Return: the number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i;
	char *buffer, letter_function;
	int (*function)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (-1);
	}
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[i] = format[i];
		}
		else
		{
			i++;
			letter_function = format[i];
			function = (*get_func(&letter_function))(ptr);
		}
		for (i = 0; buffer[i] != '\0'; i++)
		{
		_putchar(buffer[i]);
		}
		return (i);
	}
}
