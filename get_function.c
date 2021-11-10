#include "main.h"

/**
 * get_function - function that choose.
 * @s: list of types of arguments passed to the function.
 * Return: Pointer to the function that corresponds
 * to the format given as a parameter.
 */

int (*get_function(char *s))(va_list)
{
	op_t ops[] = {
	{"c", print_char},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != s && i < 4)
	{
		i++;
	}
	return (ops[i].function);
}
