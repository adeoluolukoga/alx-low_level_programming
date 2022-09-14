#include "main.h"

/**
* print_alphabet - Entry point
* Description - it prints all alphabets in lowercase
* Return: On success 0.
*/

void print_alphabet(void)

{
	char alpha = 'a';

	for (alpha = 'a'; alpha < 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');

		return (0);

}

