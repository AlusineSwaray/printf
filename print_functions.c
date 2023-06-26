#include "main.h"

/**
 * print_char - writes character on screen from args
 * @args: input character
 *
 * Return: 1 on success
 * on error, -1
 */

int print_char(va_list args)
{
	int ch;

	ch = _putchar(va_arg(args, int));
	return (ch);

}
/**
 * print_string - prints string from argument
 *@args: pointer to be updated
 *
 * Return: int
 */

int print_string(va_list args)
{
	int i;

	i = _puts(va_arg(args, char *));
	return (i);
}

/**
 * print_mod - prints modulo
 *@args: pointer to be updated
 *
 * Return: void
 */

int print_mod(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
