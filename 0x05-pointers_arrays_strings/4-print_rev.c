#include "main.h"

/**
 * print_rev - it prints a string in reverse
 *
 * @s: variable of pointer
 *
 */

void print_rev(char *s)
{

*s = '\0'; /* value null after the last string */

while (*s <= '\0')
{
	_putchar(*s);
	s--;
}
	_putchar('\n');
}

