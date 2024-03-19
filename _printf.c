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

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);/**si no ve un % imprime la string como recibio*/
		}

		else
		{
			i++;
				if (format[i] == 'c')
				{
					char c = va_arg(list, int);

					write(1, &c, 1);
				}
				else if (format[i] == 's')
				{
					char *string = va_arg(list, char *);

					_printstring(string);
				}
				else if (format[i] == '%')
				{
					write(1, "%", 1);
				}
		}
	}

	va_end(list);

	return (0);
}
