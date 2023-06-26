#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes the character c on screen
 * @c: input character
 *
 * Return: 1 on success
 * on error, -1
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
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
 * _puts - takes a pointer to an int and update its value to 98
 *@words: pointer to be updated
 *
 * Return: void
 */

int _puts(char *words)
{
	int count = 0;

	while (*words != '\0')/*set a condition to not print null zero*/
	{
		_putchar(*words);
		words++;/*increament the pointer value so it'll point to the next val*/
		count++;
	}
	return (count);
}
