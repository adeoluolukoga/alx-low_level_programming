#include "main.h"

/**
 * rev_string - it prints a string in reverse
 *
 * @s: variable of pointer
 *
 */

void rev_string(char *s)
{

while (*s != '\0')
{
	_putchar(*s);
	s++;
}
if (*s == '\0')
{
	_putchar('\n');
	s--;
	while (*s != '\0')
/*we can't use <= >= cos strings are not numbers that can be ordered*/
	{
		_putchar(*s);
		s--;
	}
}
else
{
}

	_putchar('\n');

}

