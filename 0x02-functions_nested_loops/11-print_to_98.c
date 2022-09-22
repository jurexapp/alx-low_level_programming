#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point for program
 * @n: The character parameter
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

void print_to_98(int n)
{

	int m = n;
	if (m < 98)
	{
		int o = m;
		for (; o <= 98; o++)
		{

			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", o);
			}
		}
	}
	else if (m > 98)
	{
		int o = m;
		for (; o >= 98; o--)
		{
			printf("%d, ", o);
		}
	}
	else
	{
		printf("%d, ", m);
	}
}
