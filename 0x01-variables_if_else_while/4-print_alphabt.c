#include <stdio.h>

/**
* main - Determines either greater than 5, is less than 6, or is 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
