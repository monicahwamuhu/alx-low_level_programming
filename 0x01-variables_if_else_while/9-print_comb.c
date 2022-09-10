#include <stdio.h>
#include <ctype.h>
/**
 *  main - prints all possible combinations of single digit numbers
 *
 *  Return- return 0
 */
int main(void)
{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
		if (c == '9')
		
			continue;


			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}



