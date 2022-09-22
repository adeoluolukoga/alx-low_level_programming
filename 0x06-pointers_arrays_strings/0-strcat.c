#include "main.h"

/**
 * _strcat - concatenates two pointers
 *
 * @dest: variable 1
 * @src: variable 2
 *
 */

char *_strcat(int *dest, int *src)
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
