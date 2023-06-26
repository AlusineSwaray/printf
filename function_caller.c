#include "main.h"
/**
 * get_func -  searchs for the function that corresponds with specifier
 * @s: format specified
 *
 * Return: NULL if function not found
 */

int (*get_func(char s))(va_list)
{
	case_t array[] = {{'c', print_char}, {'s', print_string}, {'%', print_mod}};
	int i = 0;

	while (array[i].ch)
	{
		if (array[i].ch == s)
		{
			return (array[i].fp);/*ch and fp are both initizialed in the main.h header*/
		}
		i++;
	}
	return (NULL);
}
