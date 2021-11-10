#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%s Let's try to printf a simple sentence.\n", "hola");
	printf("%s Let's try to printf a simple sentence.\n", "hola");
	_printf("%c Character:[%c]\n", 'H', 'l');
	printf("%c Character:[%c]\n", 'H', 'l');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
