#include "main.h"

/**
 * _isalpha - identifies letter
 * @c: The input letter
 *
 * Description - it checks if an input is a letter
 *
 * Return: 1 if true an 0 if not
 */

int _isalpha(int c)
{

	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c >= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
