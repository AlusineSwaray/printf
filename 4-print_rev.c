#include "main.h"

/**
 * print_rev - takes a pointer to an int and update its value to 98
 *@rev: pointer to be updated
 *
 * Return: void
 */

void print_rev(char *rev)
{
	int i = 0;

	while (*rev != '\0')
	{
		++i;
		++rev;
	}

	for (i = i; i >= 0; --i)
	{
		if (*rev == '\0')/*without this condition, we get an invisible character*/
		{
			rev--;
			continue;
		}
		_putchar(*rev);
		--rev;
	}
	_putchar('\n');
}
