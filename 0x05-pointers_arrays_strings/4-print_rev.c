#include "main.h"

/**
 * print_rev - it prints a string in reverse
 *
 * @s: variable of pointer
 *
 */

void print_rev(char *s)
{

while (*s != '\0')
{
	s++;
}
if (*s == '\0')
{
	while (*s <= '\0')
	{
		s--;
		_putchar(*s);
	}
}

	_putchar('\n');

}

