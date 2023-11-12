#include "main.h"
/**
 * _strleng - returns the length of a string
 * @s: string
 * Return: length
 */
int _strleng(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strlengcons - function that prints the length of string
 * but used for constant character pointer s
 * @s: character pointer
 * Return: s
 */
int _strlengcons(const char *s)
{
	int length;

	for (length = 0; s[length] != 0; length++)
		return (length);
}

