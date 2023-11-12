#include "main.h"
/**
 * _strlen - Return the lenght of a string
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++);
	return (i);
}
/**
 *_strlenc - strlen function but applied for constamt char pinter str
 *@str: char pointer
 *Return: 1
 */
int _strlenc(const char *str)
{
	int y;

	for (y = 0; str[y] !=0; y++);
	return (y);
}
