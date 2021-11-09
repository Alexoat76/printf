# pritntf🖨

✨Printf customized for Holberton School project

[GITHUB] (git@github.com:Alexoat76/printf.git).

## 🚀 Description

In this project you can find a small version of printf that can handle the following format specification: c, s, %, d and i.
This version cannot handle flag characters, field width, precision and length modifiers.
Also, a main.h file was created.

This Printf function customized  was developed by Holberton Students of cohort 16,
Joana Casallas and Alex Arevalo.

This file shows how _printf works, and how to design the proper formatting specification. 

## 🚀**Resources** 🔧
https://www.cypress.com/file/54761/download

**Authorized functions and macros**

**write (man 2 write)**

**malloc (man 3 malloc)**

**free (man 3 free)**

**va_start (man 3 va_start)**

**va_end (man 3 va_end)**

**va_copy (man 3 va_copy)**

**va_arg (man 3 va_arg)**

## 🚀**Compilation**
The code will be compiled this way:

**$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c**

As a consequence, be careful not to push any c file containing a main function in the root directory of your project
(you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h):
#include main.h

## 🚀Flowchart _Printf Function
![_Printf Flowchart](https://cdn-images-1.medium.com/max/800/1*5j-rfA_4yZ467hEawAsKTA.jpeg)
## **Use & Examples**

**Specifier	Output	Examples**

**c = Character = y**

**i or d = integer or decimal = 1024 , -1024**

**s = string = Hello Holberton**

**u = unsigned integer = 1024**

**x = unsigned hexadecimal integer = 3ca**

**X = unsigned hexadeimal integer (uppercase) = 3CA**

**p = pointer address = 0X403212**



## 🚀**Prototype:**
int _printf(const char *format, ...);

**Examples:**

Basic String:
_printf("%s Holberton", "Hello");`
Output: Hello Holberton

Print integers:
_printf("The current year is[%i]", 2021, );`
Output: The curret year us 2021

## Files contained in this repository

**man_3_printf**
Man page of the _printf() function.

**main.h**
Header file with the data type struct, standard libraries and custom prototypes

**get_func.c**
File with the list of variables that point to the corresponding function

**_printf.c**
Main printf function file.

**_putchar.c**
Custom putchar function.

**print_percent.c**
Contains percentage print function.

**print_c.c**
Custom function for char data type.

**print_string.c**
Function that calls string type variable.
**printf_bin.c**
Function that gets the binary

**printf_oct.c**
Functions that returns octal number.

**printf_hex.c**
Calls hexadecimal numbers (lowercase).

**printf_HEX.c**
Calls hexadecimal numbers (Uppercase).

**printf_unsigned.c**
Returns an unisgined data type.

**printf_hex_aux.c**
Auxiliar function for hexadecimal specific functions (lowercase).

**printf_exclusive_string.c**
printf_HEX_aux.c	Auxiliar function hexadecimal specific functions
(Uppercase).

**printf_exclusive_string.c**
Returns a string and non readable characters are printed in hexadecimal numbers (Lowercase).	

**printf_srev.c**
Returns a string in reverse.

**printf_rot13.c**
Returns a string in Rot13.

**printf_str.c**
Auxiliar functions such as strlen and strcpy.

**Authors**  Joana Casallas **|** Alex Arevalo
# _Printf

🧾 Licens fre