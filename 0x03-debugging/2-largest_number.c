#include "main.h"

/**
 * largest number - returns the largest number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largets number
 */
int largest number(int a; int b; int c)
{
	int largest;

	if (a > b)
	{
		if (b > a)
			largest = a;

		else if (a > c)
			largest = a;
		else
			largest = c;

	}
	else
	{
		if (b > c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}
