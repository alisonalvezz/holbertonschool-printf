#include "main.h"
#include <stdio.h>

/**
 * _printstring - prints a string
 * @string: string to print
 * @format: the format in which is print
 *Return: the string that was traveled by counter
 */

int print_letters(char format, char *string)
{
	int counter = 0;

	switch (format)
	{
		case 's':
			if (string == NULL)
			{
				write(1, "(null)", 6);
				counter = counter + 6;
			}
			else
			{
				while(string != NULL)
				{
					write(1, string++, 1); /** para acceder al caracter de string*/
					counter++;
				}
			}
			break;
		case 'c':
			write(1, &string, 1);
			counter++;
			break;
		case '%':
			write(1, "%", 1);
			counter++;
			break;
	}
	
	return (counter);
}
