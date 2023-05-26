#include "main.h"
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char low, upper;
	int isletter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == low || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
