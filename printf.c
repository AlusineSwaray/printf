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
	char *s;

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
				_putchar((char) va_arg(args, int));
				num++;
				break;
			case 's':
				s = va_arg(args, char *);
				write(1, s, strlen(s));
				num += strlen(s);
				break;
			case '%':
				_putchar('%');
				num++;
				break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			num++;
		}
		i++;
	}
	va_end(args);
	return (num);
}
