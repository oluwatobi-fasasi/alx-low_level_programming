#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 * @c: The character
 *
 * Return: value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
