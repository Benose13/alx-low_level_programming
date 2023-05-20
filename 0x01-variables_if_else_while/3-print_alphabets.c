#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}

	k = 'A';

	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}

	putchar('\n');

	return (0);
}
