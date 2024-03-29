#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _printstring(char *string);
int print_percent(void);
int print_char(char c, va_list list);
int print_numbers(long int n);


#endif
