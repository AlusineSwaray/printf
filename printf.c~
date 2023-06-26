#include <stdarg.h>
#include <string.h>
#include <unistd.h>
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
	int i;
	char c;
	char *s;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			/** increment i to check next char **/
			i++;
			switch (format[i])
			{
			case 'c':
				c = (char) va_arg(args, int);
				write(1, &c, 1);
				break;
			case 's':
				s = va_arg(args, char *);
				write(1, s, strlen(s));
			}
		}
		else
			write (1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
