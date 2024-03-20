#include "main.h"

/**
 * print_numbers - prints numbers
 * @n: the numbers to print
 * Return: the numbers
 */

size_t print_numbers(long int n)
{
	size_t count = 0;

	char digit;

	if (n < 0)
	{
		write(1, "-", 1); /**imprime el signo -*/
		count++;
		n = -n; /** convierte el numero a su valor absoluto*/
	}

	if (n / 10 != 0)
	{
		count = count + print_numbers(n / 10);
	}

	digit = n % 10 + '0';
	write(1, &digit, 1);
	count++;

	return (count);
}
