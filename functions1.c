#include "main.h"
#include "unistd.h"

/**
 * _putchar - writes the character c on screen
 * @c: input character
 *
 * Return: 1 
 * on error, -1
 */

int _putchar(char c)/*All these functions return int */
{
	write(1, &c, 1);
	return (1);
}
/**
 * _strlen - checks the length of a string
 *@s: string
 *
 * Return: length of string 
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
 * _puts - prints a string
 *@words: string input
 *
 * Return: count = length of string printed
 */

int _puts(char *words)
{
	int count = 0;

	while (*words != '\0')/*set a condition to not print null zero*/
	{
		_putchar(*words);
		words++;/*increament the pointer value so it'll point to the next val*/
		count++;/*counter for chars printed*/
	}
	return (count);
}
