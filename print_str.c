#include "main.h"

/**
 * print_str - a function that prits out the string
 * @str1: the argument to the function
 * Return: the string
 */
int print_str(va_list str1)
{
	char *string;
	int x;
	int len;

	string = va_arg(str1, char *);
	if (string == NULL)
	{
		string == "(NULL)";
		len = _strleng(string);
		for (x = 0; x < len; x++)
			_putchar(string[x]);
		return (len);
	}
	else
	{
		len = _strleng(string[x]);
		for (x = 0; x < len; x++)
			_putchar(string[x]);
		return (len);
	}
}
