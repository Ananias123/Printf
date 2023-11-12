#include <unistd.h>

/**
 * _putchar -a function that writes 
 * the character c to standard output.
 * @c: The character to print
 *
 * Return: On success 1 else, -1 is printed
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
