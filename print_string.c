#include "main.h"

/**
 * print_string - print string
 * @s: string to print
 *
 * Return: 1.
 */

int print_string(va_list s)
{
	char *string;
	int  ret = 0;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(null)";
	while (string[ret])
	{
		_putchar(string[ret]);
		ret++;
	}
	return (ret);
}
