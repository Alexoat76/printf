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
	char *buffer, letter;

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
			buffer[i] = format[i];
		}
		else
		{
			i++;
			letter = format[i];
			
		}
	}
}
