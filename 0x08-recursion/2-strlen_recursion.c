#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to count
 * Return: int
*/
int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}

return (ntr);
}
