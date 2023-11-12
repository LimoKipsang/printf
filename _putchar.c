#include "main.h"
/**
 * _putchar - writes the character c to standard output
 * @c: the character to print
 * Return: on succes 1
 * on error, 1 is return and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
