#include "main.h"
/**
 *_strlenc - finds lenght of a string for constant char pointer str
 *@str: char pointer
 *Return: 1
 */
int _strlenc(const char *str)
{
int y;

for (y = 0; str[y] != 0; y++);
return (y);
}
