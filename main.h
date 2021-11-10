#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/*
 * File: main.h
 * Authors: Joana Casallas / Alex Arevalo
 * email: 3361@holbertonschool  /  3915@holbertonschool.com
 */

/**
 * struct op - Struct op
 * @op: The operator.
 * @function: The function associated.
 */

typedef struct op
{
	char op;
	int (*function)(va_list);
} op_t;

/*protypes of functions*/

int print_percent(va_list c);
int print_char(va_list c);
int print_string(va_list s);
int _strlen(char *format);
int _putchar(char c);
int _printf(const char *format, ...);


/*prototype: selects the correct function to print*/

int (*get_function(char *s))(va_list);


#endif /*_MAIN_H_*/
