#include <stdio.h>
#include <ctype.h>
/**
 *  main - prints all single digits of base 16 followed by new line
 *
 *  Return- return 0
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

