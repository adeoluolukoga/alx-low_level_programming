#include "main.h"

/**
 * more_numbers - Entry point
 * Description - it prints digits 0 to 14 10xtimes
 * Return void
 */

void more_numbers(void)
{
	int digit = 0;
	int count = 1;

	while (count <= 10)
	{

		for (digit = 0; digit <= 14; digit++)
		{
			if (digit < 10)
				_putchar(digit);
			else
				_putchar(digit / 10);
				_putchar(digit % 10);
		}

		count++;

		_putchar('\n');
/* note that there is no return bcos return value of the function is void*/
	}
}
