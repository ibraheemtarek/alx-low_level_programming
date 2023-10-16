#include "main.h"

/**
 * main - used to swap between two integers
 * @a: first integer
 * @b: second integer
 * return: no return 
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*b = c;
	*a = *b;
}
