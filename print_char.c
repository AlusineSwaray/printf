#include "main.h"
/**
 * print_char - prints a char to standard output
 * @c: character to be printed
 *
 * Return: return 1 as character printed
 */

int print_char(va_list c)
{
	int bytes = 0;
	char ch;

	ch = (char) va_arg(c, int);

	bytes += put_char(ch);
	return (bytes);
}
