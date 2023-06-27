#include "main.h"
/**
 * print_num - prints integer value to the standard output
 * @num: integer to be printed
 *
 * Return: return the bytes printed
 */
int print_num(int num)
{
	int num1;
	int bytes = 0;

	/** if num is negative print - sign and change num to +ve */
	if (num < 0)
	{
		_putchar('-');
		bytes++;
		num1 = -num;
	}
	else
	{
		num1 =num;
	}
	/** remove the last digit and recur */
	if (num1 / 10)
	{
		bytes += print_num(num1 / 10);
	}
	/** print last digit and increment byte **/
	_putchar((num1 % 10) + '0');
	bytes++;

	return (bytes);
}

/**
 * print_dec - prints decimal from d specifier
 * @args: input argument
 *
 * Return: length of numbers printed
 */
int print_dec(va_list args)
{
	int dec, count;

	dec = va_arg(args, int);
	count = print_num(dec);
	return (count);
}

/**
 * print_int - prints integer from d specifier
 * @args: input argument
 *
 * Return: length of numbers printed
 */
int print_int(va_list args)
{
	int iNt, count;

	iNt = va_arg(args, int);
	count = print_num(iNt);
	return (count);
}
