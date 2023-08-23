#include "main.h"
/**
 * _strncpy - unction that copies a string
 * @src: pointer to source input
 * @dest: pointer to destination input
 * @n: bytes of @src
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
