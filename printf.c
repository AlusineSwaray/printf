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
	int pxn = 0, bytes = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format)
	{
		if (*format == '%' || !format)
		{
			format++;
			pxn++;
			/** get sepecifier and print **/
			if (*format == '%')
			{
				put_char('%');
				bytes++;
			}
			else if ((*get_spec_func(format, pxn)) != NULL)
			{
				bytes += get_spec_func(format, pxn)(args);
			}
			else
			{
				put_char(*format);
				bytes++;
				format++;
				pxn++;
			}
		}
		put_char(*format);
		bytes++;
		format++;
		pxn++;

	}
	va_end(args);
	return (bytes);
}
