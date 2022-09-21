#include "main.h"

/**
 * _abs - converts a number to absolute value
 * @n: The input number
 *
 * Description - absolute value.
 *
 * Return: int, 0 or -int.
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n *= -1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}

}
