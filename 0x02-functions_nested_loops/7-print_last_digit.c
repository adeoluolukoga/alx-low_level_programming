#include "main.h"

/**
 * print_last_digit - it prints value of last digit
 * @n: The input number
 *
 * Description - absolute value.
 *
 * Return: value for last digit
 */

int print_last_digit(int n)
{

int lastdigit;

	if (n < 0)
	{
		n *= -1;
		lastdigit = n % 10;
		_putchar(lastdigit + '0');
	}
	else
	{
		lastdigit = n % 10;
		_putchar(lastdigit + '0');
	}

	return (lastdigit);

}
