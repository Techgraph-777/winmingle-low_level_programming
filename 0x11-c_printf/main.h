#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* main function */
int _printf(const char *format, ...);

/* helper functions */
int print_char(char c);
int print_string(char *s);
int _putchar(char c);
int print_number(int n);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n, int uppercase);

int print_string(char *str);
int print_special_string(char *str);

int print_pointer(void *ptr);
int print_padding(int count);
int print_zero_padding(int count);
int print_reverse(va_list args);
int print_rot13(va_list args);

#endif
