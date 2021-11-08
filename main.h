#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/*
 * File: main.h
 * Authors: Joana Casallas / Alex Arevalo
 * email: 3361@holbertonschool  /  3915@holbertonschool.com
 */

/**
 * struct op - Struct op
 * @op: The operator.
 * @f: The function associated.
 */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

/*protypes of functions*/

int _putper(va_list);
int _putchar(va_list);
int _puts(va_list);


/*prototype: selects the correct function to print*/

int (*get_func(char *s))(va_list);


#endif /*_MAIN_H_*/
