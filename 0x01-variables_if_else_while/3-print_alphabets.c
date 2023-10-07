#include <stdio.h>

/**
* main - Determines either greater than 5, is less than 6, or is 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char ca = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ca <= 'Z')
	{
		putchar(ca);
		ca++;
	}
	putchar('\n');
	return (0);
}
