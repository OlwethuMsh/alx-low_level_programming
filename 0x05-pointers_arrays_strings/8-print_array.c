#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: input n elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dprintf("%d", *(a + i));
		if (i != n - 1)
			_dprintf(", ");
	}

	_dprintf("\n");
}
