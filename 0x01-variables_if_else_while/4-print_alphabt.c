#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'q' && k != 'e')
			putchar(k);
		k++;
	}
	putchar('\n');

	return (0);
}
