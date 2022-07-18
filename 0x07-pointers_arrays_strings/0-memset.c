#include "main.h"

/**
 * _memset - fills in memory
 * @s: memory
 * @b: byte constant
 * @n: filled bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) =  b;
	}
	return (s);
}
