#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *aj;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	aj = malloc(sizeof(c) * size);

	if (aj == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		aj[i] = c;
	}
	return (aj);
}
