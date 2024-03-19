#include "main.h"
#include <stdio.h>

/**
 * _printstring - prints a string
 * @string: string to print
 *Return: the string that was traveled by c
 */

char _printstring(char *string, ...)
{	va_list list;

	int counter;

	va_start(list, string);

	if (string)
	{
		for (counter = 0; string[counter] != '\0'; counter++)
		{
			write(1, &string[counter], 1);
		}
	}
	return (counter); /**retorna el numero de caracteres printeados*/

	va_end(list);
}
