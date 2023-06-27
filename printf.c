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
	
	if (_strlen(format) == 0)
		return (-1);
	if (format == NULL|| *format == '\0')
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/** increment i to check next char **/
			i++;
			if ((*get_func(format[i])) != NULL)
				num += (*get_func(format[i]))(args);/*the important bit i guess*/
			else
			{
				return (-1);
			}
		}
		else
			num += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (num);
}
