#include <stdio.h>
#include <ctype.h>
/**
 *  main - program to print alphabet in reverse followed by a new line
 *
 *  Return= return 0
 */
int main(void)
{
	int letter;

	for (letter = 'z' ; letter <= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

