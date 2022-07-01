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

	i = '0';
	a = '0';

	while (i <= '9')
	{
		while (a <= '9')
		{
			if (!(i > a || i == a))
			{
				putchar(i);
				putchar(a);
				if (i == '8' && a == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		a = '0';
		i++;
	}
	return (0);
}
