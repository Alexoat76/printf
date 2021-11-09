#include "main.h"

/**
 * _printf - Function that prints anything.
 * @format: character string  composed of zero or more directives
 * Return: the number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i, j, k, run_buffer;
	char buffer[2048];
	const char *letter_function;
	int (*function)(va_list);              /*1[%s]\n, "abc" */

	if (format == NULL)
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
			letter_function = &format[i];
			function = get_function(letter_function)(ptr);
			if (function == NULL)
			{
				for (j = 0; j <= i; j++ )
				{
					free(*buffer[j]);
				}
				return (-1);
			}
			for (k = 0; k < i; k++)
			{
				_putchar(buffer[k]);
			}
			run_buffer = function(ptr);
			i++;
		}
		_putchar('\0');
		va_end(ptr);
	}
	return (i + run_buffer);
}
