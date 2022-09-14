#include "main.h"

/**
 * print_sign - identifies sign of number
 * @n: The input number
 *
 * Description - it checks the the sign.
 *
 * Return: 1 if +, 0 if zero and -1 if -.
 */

int print_sign(int n)
{

	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
