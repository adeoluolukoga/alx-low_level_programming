#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @s: variable of pointer
 *
 */

void puts_half(char *s)
{

int l;
l = 0;
while (*s != '\0')
{
	l++;
	s++;
}

	if (l % 2 == 0)/* even length */
	{
		for (*s = *(s + (l / 2)); *s != '\0'; s++)
		{
			_putchar(*s);
		}

	}
	else /* odd string length printing smaller half end*/
	{
		for (*s = *(s + ((l + 1) / 2)); *s != '\0'; s++)
		{
			_putchar(*s);
		}
	}

	_putchar('\n');

}

