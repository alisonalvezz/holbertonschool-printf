#include "main.h"
#include <stdio.h>

/**
 * _printstring - prints a string
 * @string: string to print
 *Return: the string that was traveled by counter
 */

char _printstring(char *string, ...)
{
	int counter = 0;

	if (string == NULL)
	{
		write(1, "(null)", 6);
		return (6); /**lenght of (null)*/
	}

	if (string)
	{
		for (counter = 0; string[counter] != '\0'; counter++)
		{
			write(1, &string[counter], 1);
		}
	}

	return (counter); /**retorna el numero de caracteres printeados*/
}
