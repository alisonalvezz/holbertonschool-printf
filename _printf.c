#include "main.h"

/**
 * _printf - emulates printf function
 * @format: the format that is in the input (s, c, %, i, etc)
 *Return: .
 */

int _printf(const char *format, ...)
{
	va_list list;

	int last_char = 0;

	int i;

	int counter = 0;

	last_char = format[strlen(format) - 1];

	va_start (list, format);

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
				if (format[i] == 'c' || format[i] == 's' || format[i] == '%')
				{
					char *string = va_arg(list, char *);

					counter = counter + print_letters(format[i], string);
				}
				}
		}
	if (last_char == '\n')
	{
		write(1, "\n", 2);
		counter++;
	}
	va_end(list);

	return (counter);
}
