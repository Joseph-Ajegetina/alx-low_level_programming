#include <stdio.h>

/**
 *main - print lowercase alpha a-z but remove 'q' and 'e'
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 26; i++, alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar('\n');
	return (0);
}
