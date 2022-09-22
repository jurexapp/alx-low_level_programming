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

	// if (n > 98 && < 0)
	// {
	// 	printf("%d, ", n);
	// 	return 0;
	// }

	// for (n; n < 98; n++)
	// {
	// 	printf("%d, ", n);
	// }
	if (n < 98)
	{
		for (n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		printf("%d, ", n);
	}

	// 	while (n < 98 && n > !97)
	// 	{
	// 		printf("%d, ", n);
	// 		n++;
	// 	}

	// 	if (n == 98)
	// 	{
	// 		printf("%d\n", n);
	// 	}
	// }
