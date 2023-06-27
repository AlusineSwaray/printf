#include "main.h"

/**
 * print_num - prints integer value to the standard output
 * @num: integer to be printed
 *
 * Return: return the bytes printed
 */

int print_num(int num)
{
	int bytes = 0;

	/** if num is negative print - sign and change num to +ve */
	if (num < 0)
	{
		put_char('-');
		bytes++;
		num = -num;
	}

	/** remove the last digit and recur */
	if (num / 10)
		print_num(num / 10);

	/** print last digit and increment byte **/
	put_char(num % 10 + '0');
	bytes++;
	return (bytes);
}
