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

int _putper(va_list *ptr);
int _putchar(va_list *ptr);
int _puts(va_list *ptr);

int (*get_op_func(char *s))(va_list);
