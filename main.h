#ifndef _MAIN_H_
#define _MAIN_H_

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
int _strlen(const char *s);
int _puts(char *words);
int print_num(int num);

int (*get_func(char s))(va_list);

int print_int(va_list args);
int print_dec(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args) __attribute__((unused));
int to_binary(va_list args);
int print_binary(int);
#endif /** ifndef _MAIN_H_ */
