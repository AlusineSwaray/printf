#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct cases - Struct for each specifier case
 *
 * @ch: The operator
 * @fp: The function associated
 */

typedef struct cases
{
	char ch;
	int (*fp)(va_list);
} case_t;

int _printf(const char * format, ...);

int (*case_func(char s))(va_list);

int print_char(va_list);
int print_string(va_list);

int _putchar(char c);
int _strlen(char *s);
int _puts(char *words);


#endif 
