#include <stdio.h>
/**
 *  main - prints the alphabet except q and e in lowercase
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		if (letter == 'q' || letter == 'e')
			continue;
		else
			putchar(letter);
	putchar('\n');
	return (0);
}
