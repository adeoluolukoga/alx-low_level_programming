#include "main.h"

/**
 * _puts2 - it prints a string
 *
 * @str: variable of pointer
 *
 */

void _puts2(char *str)
{

while (*str != '\0')
{
	_putchar(*str);
	str++;
	str++;
}
	_putchar('\n');
}

