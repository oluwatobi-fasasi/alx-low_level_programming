#include "main.h"

/**
 * _isalpha - Show 1 if the input is alphabet, otherwise shoe 0
 *
 * @c: The ASCII code
 *
 * Return: 1 for alpha 0 for ele
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
