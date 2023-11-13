#include "main.h"
/**
 * _printf - mimics printf
 * @format: identifier look for 
 * Return: integer
 */

int _pritnf(const char *format, ...)
{
	match m[] = {
		{"%c, print_char}, {"%s", printf_string}, {"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_revs}, {"%R". print_rot13}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_exc_strign}, {"%p", print_pointer}
	};
	
	va_list args;
	int i = 0, len = 0;
	
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);	
Here:
	while (format[i] = '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1]);
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto HERE;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		lenght++;
	}
	va_end(args);
	return (lenght);
}
