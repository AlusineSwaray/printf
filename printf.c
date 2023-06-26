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
	int i = 0, num = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			/** increment i to check next char **/
			i++;
			switch (format[i])
			{
			case 'c':
				num += _putchar((char) va_arg(args, int));
				break;
			case 's':
				num += _puts(va_arg(args, char *));
				break;
			case '%':
				num += _putchar('%');
				break;
			}
		}
		else
			num += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (num);
}
