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

	int counter = 0;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);/**si no ve un % imprime la string como recibio*/
			counter++;
		}
		else
		{
			i++;
				if (format[i] == '\0')
				{
					counter++;
					break;
				}
				else if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
				{
					counter = counter + print_char(format[i], list);
				}
				else
				{
					write(1, "%", 1);
					counter++;
					write(1, &format[i], 1);
					counter++;
				}
		}
	}
	va_end(list);
	return (counter);
}
