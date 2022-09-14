#include "main.h"

/**
 * _islower - identifies lowercase letter
 * @c: The input letter
 *
 * Description - it checks if an input is a lowercase
 *
 * Return: 1 if true an 0 if not
 */

int _islower(int c)
{

/* char c is converted to int r for interpretation on ASCII */

	int r = c;

	if ((r >= 97) && (r <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
