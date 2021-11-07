#ifndef _MAIN_H_
#define <stdio.h>
#define <stdlib.h>
#define <starg.h>

int print_percent(va_list *ptr);
int print_char(va_list *ptr);
int print_string(va_list *ptr);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list *ptr);
} op_t;
