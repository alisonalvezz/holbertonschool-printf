#include "main.h"

/**
 * _printf - emulates printf function
 * @format: the format that is in the input (s, c, %, i, etc)
 *Return: .
 */

int _printf(const char *format, ...)
{
	va_list list;
	
	int i;

	va_start(list, int);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);/**si no ve un % imprime la string como recibio*/
		}

		else if (format[i++] == 'c')
		{
			va_arg(list, char);
		}
		else if (format[i++] == 's')
		{
			va_arg(list, string);
			_printstring(list, string);
		}
		else if (format[i++] == '%')
		{
			va_arg(list, percent);
		}
	}

	va_end(list);

	return (0);
}
