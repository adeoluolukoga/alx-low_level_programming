#include "main.h"

/**
 * print_most_numbers - prints digits 0 to 9 except 2 and 4
 *
 * Description - printing is done using putchar
 *
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)/* _putchar uses char ASCII format */
	{
		if ((i != 50) || (i != 52))

			_putchar(i);

		else

	}

		_putchar('\n');
}
