#include "main.h"

/**
 * print_int - prints integer value to the standard output
 * @num: integer to be printed
 *
 * Return: return the bytes printed
 */

int print_int(int num)
{
	int byte = 0;

	/** if num is negative print - sign and change num to +ve */
	if (num < 0)
	{
		print_char('-');
		byte++;
		num = -num;
	}

	/** remove the last digit and recur */
	if (num / 10)
		print_int(num / 10);

	/** print last digit and increment byte **/
	print_char(n % 10 + '0');
	return (byte++);
}
