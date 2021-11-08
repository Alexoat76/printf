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
	int function;

	if (format == NULL)
	{
		return (-1);
	}
	buffer = malloc(sizeof(char) * _strlen(format));
	if (buffer == NULL)
	{
		return (NULL);
	}
	start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer += format[i];
		}
		else
		{
			i++;
			letter_function = format[i];
			buffer += (*get_func(letter))(va_list);    /* print_string(va_list)  /*Len:[%d]\n", len"*/
		}
	}
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	return (i);
}
