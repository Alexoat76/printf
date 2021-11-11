#include "main.h"

/**
 * _printf - Function that prints anything.
 * @format: character string  composed of zero or more directives.
 * Return: the number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i, ret;
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
			_putchar(format[i]);
			ret++;
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				ret++;
			}
			else if (format[i + 1] == '!')
			{
				i++;
				_putchar('%');
				_putchar('!');
				ret++;
			}
			else if (format[i + 1] != '\0')
			{
				letter_function = format[i + 1];
				function = get_function(&letter_function);
				ret += function(ptr);
				i++;
			}
			else
			{
				_putchar(format[i]);
				ret++;
			}
		}
	}
	va_end(ptr);
	return (ret);
}
