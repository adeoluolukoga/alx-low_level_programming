#include "main.h"

/**
 * print_numbers - prints digits 0 to 9
 *
 * Description - printing is done using putchar
 *
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)/* _putchar uses char ASCII format */
	{
		_putchar(i);
	}

		_putchar('\n');
}
