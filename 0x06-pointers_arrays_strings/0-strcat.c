#include "main.h"

/**
 * _strcat - concatenates two pointers
 *
 * @dest: variable 1
 * @src: variable 2
 *
 */

char *_strcat(char *dest, char *src)
{
while(*dest)
	dest++;

	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

		*dest = '\0';
}
