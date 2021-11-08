#include "main.h"

/**
 * get_func - function that choose.
 * @s: list of types of arguments passed to the function.
 * Return: Pointer to the function that corresponds
 * to the format given as a parameter.
 */

int (*get_func(char *s))(va_list)
{
	op_t ops[] = {
	{"c", _putchar},
	{"s", _puts},
	{"%", _putper},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != va_list)
	{
		i++;
	}
	return (ops[i].f);
}
