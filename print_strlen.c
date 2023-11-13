#include "main.h"
/**
 * _strlen - Return the lenght of a string
 * * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
int i;

for (i = 0; str[i] != 0; i++);

return (i);
}
