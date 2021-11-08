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

	va_start(ptr, format);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] == '%')
		{
			i++;
			function = (*get_func(*ptr[i]))(char);
			function(ptr);
		}
		else
		{
			_putchar(ptr[i]);
		}
	}
	return (i);
}
