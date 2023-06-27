#ifndef _MAIN_H_
#define _MAIN_H_
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list num);
int print_float(va_list num);
int print_dec(float dec);

typedef struct cases
{
	char *type;
	int (*function)(va_list);
} spec_t;

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct cases - Struct for each specifier case
 *
 * @case: The operator
 * @fp: The function associated
 */
typedef struct cases
{
    char ch;
    int (*fp)(va_list);
} case_t;

int _printf(const char * format, ...);
int _putchar(char c);
int _strlen(char *s);
int _puts(char *words);

int (*case_func(char s))(va_list);

int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args) __attribute__((unused));
#endif /** ifndef _MAIN_H_ */
