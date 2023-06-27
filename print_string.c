#include "main.h"

/**
 * print_string - prints a string to the standard output
 * @s: a pointer to the string to be printed
 *
 * Return: bytes printed to the standard output
 */

int print_string(va_list s)
{
	int bytes = 0;
	char *str;

	str = va_arg(s, char*);
	while (*str != '\0')
	{
		put_char(*str);
		bytes++;
		str++;
	}
	return (bytes);
}
