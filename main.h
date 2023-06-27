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
#endif /** ifndef _MAIN_H_ */
