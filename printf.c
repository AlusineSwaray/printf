#include "main.h"
/**
 * _printf -  prints output to stdout according to format specified.
 * its analogous to the printf function in the C library
 * @format: format specified
 *
 * Return: integer of the count of passed string on success
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, num = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/** increment i to check next char **/
			i++;
			num += (*case_func(format[i]))(args);/*this is the most important bit i guess*/
		}	/*the get_func calls the function as a pointer and then pass args through it*/
		else
			num += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (num);
}
