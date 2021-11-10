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
	{'c', print_char},
	{'s', print_string},
	{'i', print_int},
	{'d', print_dec},
	{'r', print_rev},
	{'b', print_bin},
	{'u', print_unsig},
	{'o', print_octal},
	{'x', print_x},
	{'X', print_X},
	{'R', print_rot13},
	{0, NULL}
	};
	int i;

	for (i = 0; ops[i].function; i++)
	{
		if (ops[i].op == *s)
			return (ops[i].function);
	}
	return (NULL);
}
