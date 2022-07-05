#include "main.h"

/**
 * islower - Show 1 if input is lower, else show 0
 *
 * Return: 1 for lower case, 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
