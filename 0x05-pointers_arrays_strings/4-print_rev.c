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
s--;
_putchar(*s);
	_putchar('\n');
}

