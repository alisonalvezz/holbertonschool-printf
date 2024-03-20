#include "main.h"

/**
 * print_numbers - prints numbers
 * @n: the numbers to print
 * Return: the numbers to print
 */
int print_numbers(long int n)
{
	int count = 0;

	char digit;

	if (n == 0 && count == 0)
	{
		digit = '0';
		write(1, &digit, 1);
		return (1);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		if (n / 10 != 0)
		{
			count += print_numbers(n / 10);
		}
		digit = '0' - (n % 10);
	}
	else
	{
		if (n / 10 != 0)
		{
			count += print_numbers(n / 10);
		}
		digit = '0' + (n % 10);
	}

	write(1, &digit, 1);
	return (count + 1);
}
