#include <unistd.h>

/**
 * _putchar.c
 */
int _puchar(char c)
{
	return write (STDOUT_FILENO, &c, 1);
}
