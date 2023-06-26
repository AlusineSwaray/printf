#include "main.h"
/**
 * print_stuff - A function that prints according to format
 * @format: input string
 * @va_list args: arguments
 *
 * Return: the number of characters printed out
 */
 void print_stuff(const char *format, va_list args)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				putchar(*format);
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					_puts(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					break;
			}
			state = 0;
		}
		format++;
	}
}
