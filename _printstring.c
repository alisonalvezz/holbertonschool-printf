#include "main.h"
#include <stdio.h>

/**
 * _printstring - prints a string
 * @string: string to print
 *Return: the string that was traveled by c
 */

char _printstring(char *string, ...)
{	va_list list;

	int c;

	va_start(list, string);

	if (string)
	{
		for (c = 0; string[c] != '\0'; c++)
		{
			write(1, &string[c], 1);
		}
	}
	return (c); /**retorna el numero de caracteres printeados*/

	va_end(list);
}
