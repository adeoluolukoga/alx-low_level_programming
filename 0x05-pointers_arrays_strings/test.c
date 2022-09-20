#include <stdio.h>

/**
 * main - calculates the length of string with results in bytes
 *
 *
 * Return: l if successful
 */

int main(void)
{

char *s;
int l;

s = "School";
l = 0;

while (*s != '\0')
{
	l++;
	*s++;
}
	printf("%d\n", l);

	return (l);

}

