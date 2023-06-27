#include "main.h"

/**
 * print_string - prints a string to the standard output
 * @s: a pointer to the string to be printed
 *
 * Return: bytes printed to the standard output
 */

int print_string(const char *s)
{
	int bytes = 0;

	while (*s != '\0')
	{
		print_char(*s);
		bytes++;
		s++;
	}
	return (bytes);
}
