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

	lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);

}