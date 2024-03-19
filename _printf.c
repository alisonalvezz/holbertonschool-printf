#include "main.h"

int _printf (char *format, ...)
{
	va_list list;
	va_start(list, 1);

	int i;

	switch (i = 0; format[i] != '\0'; i++)
	{
		case 1:
			for (i = 0; format[i] != '\0'; i++)
		case 2:
			format[i] != '%'
			write(1, &format[i], 1); /** si no encuentra un %, imprime la string como la recibio en el input*/
			break;
		case 3:
			format[i++] == 'c'
			va_arg(list, char);
			break;
		case 4:
			format[i++] == 's'
			va_arg(list, string);
			break;
		case 5:
			format[i++] == '%'
			va_arg(list, percent)
			break;
	}
}
