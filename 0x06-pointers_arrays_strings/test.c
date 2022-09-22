#include "main.h"
#include <stdio.h>

/**
 * main - concatenates two pointers
 *
 * @dest: variable 1
 * @src: variable 2
 *
 * Return: dest
 */

char main(char *dest, char *src)
{
*dest = "Hello";
*scr = "World!\n";

while (*dest)
	dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
		printf("%s\n", *dest);
		*dest = '\0';
}
