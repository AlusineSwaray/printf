#include "main.h"
/**
 * _printf -  prints output to stdout according to format specified.
 * its analogous to the printf function in the C library
 * @format: format specified
 *
 * Return: integer of the count of passed string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int pxn = 0, bytes = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' || !format)
		{
			format++;
			pxn++;
			/** get sepecifier and print **/
			if (format == '%')
			{
				print_char('%');
				bytes++;
			}
			else if (get_spec_func(format, pxn) != '\0')
			{
				bytes += get_spec_func(format, pxn)(args);
			}
		}
		print_char(format);
		bytes++;
		format++;
		pxn++;
	}
	va_end(args);
}
