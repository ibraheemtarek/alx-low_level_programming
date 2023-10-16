#include "main.h"

/**
*swap_int - used to swap between two integers
*@a: first integer
*@b: second integer
*return: no return.
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
