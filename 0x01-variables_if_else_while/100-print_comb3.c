#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;

	i = 48;
	a = 48;

	while (a < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(a);
			putchar(i);
			if (i == 57 && a == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
