#include "main.h"
/**
 * _printf - A function that prints according to format
 * @format: input string
 *
 * Return: the number of characters printed out
 */
 int _printf(const char *format, ...)
{
	/*declare variables, this function is going to call the iteration function*/
	va_list args;

	va_start(args, format);

	print_stuff(format, args); /* i am going to try writing this code in other file*/

	va_end(args);

	return (0);

}
