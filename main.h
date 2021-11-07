#ifndef _MAIN_H_
#define <stdio.h>
#define <stdlib.h>
#define <starg.h>

/**
 * struct op - Struct op
 *
 * @op: The symbol
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int print_percent(va_list *ptr);
int print_char(va_list *ptr);
int print_string(va_list *ptr);

int (*get_op_func(char *s))(va_list);
