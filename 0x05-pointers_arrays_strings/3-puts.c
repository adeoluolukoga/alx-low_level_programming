#include "main.h"

/**
 * _puts - it prints a string
 *
 * @str: variable of pointer
 *
 */

void _puts(char *str)
{

while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}

