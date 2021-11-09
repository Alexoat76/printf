#include "main.h"

/**
 * _printf - Function that prints anything.
 * @format: character string  composed of zero or more directives
 * Return: the number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list ptr;
	int i, j, k;
	char *buffer = NULL, letter_function;
	int (*function)(va_list);              /*1[%s]\n, "abc" */
	const char *filename = "main.c";
	int fd = open(filename, O_WRONLY);
	unsigned int buffer_size = (sizeof(char) * 1024);

	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	write(fd, buffer, buffer_size);
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
			if (function == NULL)
			{
				for (j = 0; format[j] != '\0'; j++ )
				{
					free(format[j]);
					return (-1);
				}
				free(format);
				i++;
			}
		}
		for (k = 0; k <= i; k++)
		{
			_putchar(buffer[k]);
		}
		run_buffer = function(ptr);
		i++;
	}
	_putchar('\0');
	close(fd);
	va_end(ptr);
	return (k + run_buffer + i);
}
