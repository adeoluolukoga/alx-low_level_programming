#include "main.h"

/**
 * _islower - Entry point
 * @c - input letter
 * Description - it checks if an input is a lowercase
 * Return 1 if true an 0 if not
 */

int _islower(int c)

/* _islower is function toprint lower case with retun 0 and 1*/

{

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
