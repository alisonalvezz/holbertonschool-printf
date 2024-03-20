#include "main.h"

/**
 * print_char - prints a char c
 * @c: the char to be printed (c, s, %, etc)
 * @list: list
 * Return: the number of characters printed
 */

int print_char(char c, va_list list)
{
	int counter = 0;

	if (c == 'c')
	{
		char cc = va_arg(list, int);

		write(1, &cc, 1);
		counter++;
	}

	else if (c == 's')
	{
		char *string = va_arg(list, char *);

		counter = counter + _printstring(string);
	}
	else if (c == '%')
	{
		counter = counter + print_percent();
	}
	return (counter);
}
