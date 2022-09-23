#include "main.h"
/**
 * add - gives the output of sum of two digits
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */
int add(int a, int b)
{
int a;
int b;
int sum;

	sum = a + b;
	if (sum < 10)
	{
		_putchar(sum + '0');
	}
	else
	{
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
	}

	return (sum);
}
