#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description - it prints alphabets 10xtimes
 * Return void
 */

void print_alphabet_x10(void)
{
	char alphax10 = 'a';
	int count = 1;

	while (count <= 10)
	{

		for (alphax10 = 'a'; alphax10 <= 'z'; alphax10++)
		{
			_putchar(alphax10);
		}

		count++;

		_putchar('\n');/* note that there is no return bcos 
				* return vale of the function is void
				*/

	}
}
