#include "main.h"

/**
 * swap_int - swap 2 integer values
 * @a: integer a
 * @b: integer b
 * Return: none.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
