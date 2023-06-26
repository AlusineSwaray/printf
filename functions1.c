#include "unistd.h"
#include "main.h"

/**
 * _putchar - writes the character c on screen
 * @c: input character
 *
 * Return: 1 on success
 * on error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - takes a pointer to an int and update its value to 98
 *@words: pointer to be updated
 *
 * Return: void
 */
void _puts(va_list args)
{
	char *words = va_arg(args, char *);

	while (*words != '\0')/*set a condition to not print null zero*/
	{
		_putchar(*words);
		words++;/*increament the pointer value so it'll point to the next*/
	}
}

/**
 * _strlen - takes a pointer to an int and update its value to 98
 *@s: pointer to be updated
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')/*set a condition to not print null zero*/
	{
		i++;/*i increases for every iteration*/
		s++;/*increament the pointer value so it'll point to the next val*/
	}
	return (i);
}

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
}
