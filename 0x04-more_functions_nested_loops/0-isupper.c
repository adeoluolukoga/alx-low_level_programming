#include "main.h"

/**
 * _islower - identifies uppercase letter
 * @c: The input letter
 *
 * Description - it checks if an input is a lowercase
 *
 * Return: 1 if true an 0 if not
 */

int _isupper(int c)
{

	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
