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
	char *letter = NULL;
	char *str = NULL;

	va_start(ptr, format);
	if (ptr == NULL)
	{
		return ('\0');
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			*letter += format[i];
			(*get_func(letter))(ptr);
		}
		else
		{
			str[i] = format[i];
			counted_characters += str[i];
		}
	}
	return (counted_characters);
}
