#include "main.h"

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
