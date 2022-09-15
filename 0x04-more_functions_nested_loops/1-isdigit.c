#include "main.h"

/**
 * _isdigit - identifies digits
 * @c: The input letter
 *
 * Description - it checks if an input is a lowercase
 *
 * Return: 1 if true an 0 if not
 */

int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
