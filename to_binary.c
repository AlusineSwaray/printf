#include "main.h"

/**
 *  to_binary - convert integer to a binary
 * @n: - arguement of va_list
 *
 * Return: number of bytes
 */

int to_binary(va_list n)
{
	int num, bytes = 0;

	num = va_arg(n, int);
	bytes += print_binary(num);
	return (bytes);
}
/**
 *  to_binary - print binary instead of integer
 * @n: - arguement of va_list
 *
 * Return: number of bytes print to stdout
 */
int print_binary(int n)
{
	int bytes = 0;

	if(n > 1)
	{
		print_binary(n/2);
	}
	bytes += _putchar('0' + n % 2);

	return (bytes);
}
