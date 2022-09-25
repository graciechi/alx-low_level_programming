#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: size is a variable name
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(32);
			}

			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
