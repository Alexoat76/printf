#include "main.h"

/**
 * _printf - Function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: Printed characters.
 */

int _printf(const char *format, ...)   /*String:[%s]\n", "I am a string !*/
{
	va_list ptr;
	int i;
	int *function;
	char *letter;

	va_start(ptr, format);
	if (ptr == NULL)
	{
		return ('\0');
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			letter = format[i + 1];
			function = (*get_func(letter))(ptr);
			function(ptr);
		}
		else
		{
			_putchar(ptr[i]);
		}
	}
	return (i);
}
