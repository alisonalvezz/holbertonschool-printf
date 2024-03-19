#include "main.h"

char _printpercent(char *percent, ...)
{
	int i;

	va_list(list, percent);
	va_start(list)

	if(percent)
	{
		if(i == '%')
		{
			write(1, '%', 1);
		}
	}

	va_end(list);

	return (0);
}
