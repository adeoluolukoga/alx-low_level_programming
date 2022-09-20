#include "main.h"

/**
 * _strlen - calculates the length of string with results in bytes
 *
 * @s: variable of pointer
 *
 * Return: l if successful
 */

int _strlen(char *s)
{
0
0
int l;
l = 0;
while (*s != '\0')
{
	l++;
	s++;
}

	return (l);

}

