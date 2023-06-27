#include "main.h"
/**
* get_spec_func - this function gets the function to be perform for a specifier
* @s: a pointer to the specifier
*
* Return: the number of bytes and print the specifier
*/
int (*get_spec_func(const char *s, int pxn))(va_list)
{
	int i;
	spec_t cases[] = {
		{"s", print_string},
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
	int i;

	while(i < 5)
	{
		if (cases[i].type[0] == s[pxn])
			return ((*cases[i].function));
		i++;
	}
	return ((*cases[i].function));
}
