#include "main.h"

/**
 * _puts - takes a pointer to an int and update its value to 98
 *@words: pointer to be updated
 *
 * Return: void
 */

void _puts(char *words)
{

	while (*words != '\0')/*set a condition to not print null zero*/
	{
		_putchar(*words);
		words++;/*increament the pointer value so it'll point to the next val*/
	}
	_putchar('\n');
}
