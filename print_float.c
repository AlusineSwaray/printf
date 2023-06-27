#include "main.h"
/**
 * print_float - prints floating number
 * @num: number to be printed
 *
 * Return: the number of bytes printed
 */

int print_float(va_list n)
{
	int i;
	int bytes = 0;
	float dec, num;

	num = (float) va_arg(n, double);
	/** if num is -ve, add print -sign and make num +ve */
	if (num < 0)
	{
		put_char('-');
		bytes++;
		num = -num;
	}
	/** extract the integer part */
	i = (int) num;
   /** use print_int to print integer part and increase byte by return value */
	bytes += print_num(i);
	/** print decimal point */
	put_char('.');
	bytes++;
	/** extract decimal part */
	dec = num - i;
     /** a function to print decimal part and increase ytes by return value **/
	bytes += print_dec(dec);
	return (bytes);
}

/**
 * print_dec - prints the floating part of type float
 * @dec: floating part
 * Return: the bytes printed
 */

int print_dec(float dec)
{
	int digit, bytes;

	bytes = 0;

	if (dec * 10 == 0)
		return (bytes++);
	/** recursively print each of the float number */
	digit = (int) (dec * 10);
	put_char('0' + digit);
	bytes++;
	print_dec((dec * 10) - digit);
	return (bytes);
}
