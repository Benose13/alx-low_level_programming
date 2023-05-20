#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
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
	putchar('\n');

	return (0);
}
