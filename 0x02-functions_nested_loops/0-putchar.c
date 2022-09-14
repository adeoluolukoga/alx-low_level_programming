#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)

{
	char c[] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(c[b]);
	}
		_putchar('\n')

		return (0);

}

