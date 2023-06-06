#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *cneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		cneedle = needle;

		while (*haystack != '\0' && *cneedle != '\0' && *haystack == *cneedle)
		{
			haystack++;
			cneedle++;
		}
		if (!*cneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
