#include "main.h"

/**
 * char_print - the function that prints a character.
 * @arg1: the argument to the function
 * Return: 1 if the character is printed else 0
 */
int char_print(va_list arg1)
{
	char string;

	string = va_arg(arg1, int);
	_putchar(string);
	return (1);
}
