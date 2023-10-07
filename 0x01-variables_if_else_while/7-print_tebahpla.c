#include <stdio.h>

/**
* main - Determines either greater than 5, is less than 6, or is 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
