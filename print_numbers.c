#include "main.h"

int print_numbers(long int n)
{
	int count = 0;
	
	char digit;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}

	if (n / 10 != 0)
		count = count + print_numbers(n / 10);

	digit = n % 10 + '0';
	write(1, &digit, 1);
	count++;

	return (count);
}
