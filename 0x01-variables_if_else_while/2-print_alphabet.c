
#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char first = 'a';
	char last = 'z';
	while (first <= last)
	{
		putchar(first);
		first++;
	}
	putchar('\n');

	return (0);
}
