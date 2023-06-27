#include <unistd.h>
/**
 * print_char - prints a char to standard output
 * @c: character to be printed
 *
 * Return: return 1 as character printed
 */

int put_char(char c)
{
	write(1, &c, 1);
	return (1);
}
