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
	int num = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format)
	{
		if (*format == '%')
		{
			format++;
			/** get sepecifier and print **/
			if (*format == '%')
			{
				num += _putchar('%');
			}
			else if ((*case_func(*format)) != NULL)
			{
				num += case_func(*format)(args);
			}
			else
			{
				_putchar(*format);
				num++;
				format++;
			}
		}
		_putchar(*format);
		num++;
		format++;

	}
	va_end(args);
	return (num);
}
