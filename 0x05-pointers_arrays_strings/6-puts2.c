#include "main.h"

/**
 * puts2 - it prints a string
 *
 * @str: variable of pointer
 *
 */

void puts2(char *str)
{

while (*str != '\0')
{
	_putchar(*str);
	str++;
	str++;
}
	_putchar('\n');
}

