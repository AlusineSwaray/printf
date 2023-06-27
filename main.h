#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
/**
 * struct cases - Struct for each specifier case
 *
 * @case: The operator
 * @fp: The function associated
 */

typedef struct cases
{
	char *type;
	int (*function)(va_list);
} spec_t;

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/** prints char type */
int print_char(va_list c);
/* prints string */
int print_string(va_list s);
/* prints integer */
int print_int(va_list num);
int print_num(int num);
/* prints float */
int print_float(va_list num);
int print_dec(float dec);
/* write character to stdout */
int put_char(char c);
/** get specifier operation */
int (*get_spec_func(const char *s, int pxn))(va_list);
/* main entry */
int _printf(const char * format, ...);
#endif /** ifndef _MAIN_H_ */
