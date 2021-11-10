#include "main.h"

/**
 * _printf - Function that prints anything.
 * @format: character string  composed of zero or more directives
 * Return: the number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i, k;
	char buffer[2048];
	char letter_function;
	int (*function)(va_list);

	if (format == NULL || ptr == NULL ||
			(format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[i] = format[i];
		}
		else
		{
			if (format[i + 1] != '\0')
			{
				letter_function = format[i + 1];
				function = get_function(&letter_function);
			}
			else
				buffer[i] = format[i];
		}
	}
	for (k = 0; k < i; k++)
	{
		_putchar(buffer[k]);
	}
	va_end(ptr);
	return (1);
}
