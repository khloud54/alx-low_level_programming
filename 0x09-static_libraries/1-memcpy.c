#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: input
 * @src: input
 * @n: length of src to be copied
 * Return: Always 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
