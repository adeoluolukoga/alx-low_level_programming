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
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
}

	_putchar('\n');

}

