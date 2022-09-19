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

int l;

while (*s != '\0')
{
	l++;
	*s++;
}
	return (l);

}

