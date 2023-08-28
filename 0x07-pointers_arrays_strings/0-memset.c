#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes of the memory
 * Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}
	return (s);
}
