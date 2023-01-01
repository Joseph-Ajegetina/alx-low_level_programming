#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 26; i++, alpha++)
		putchar(alpha);
	alpha = 'A';
	for (i = 0; i < 26; i++, alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
