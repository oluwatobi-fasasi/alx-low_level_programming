#include <unistd.h>
#include "main.h"

/**
 * _putchar - write function
 * @c: Character c
 *
 * * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
