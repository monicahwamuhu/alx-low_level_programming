#include <stdio.h>
#include <ctype.h>
/**
 * main - program to alphabet letters except q and e followed by new line
 *
 * Return= return o
 */
int main(void)

{
	int letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}

