#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <stdarg.h>
void print_c(va_list lists, char *sep);
void print_i(va_list lists, char *sep);
void print_f(va_list lists, char *sep);
void print_s(va_list lists, char *sep);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	void (*f)(va_list lists, char *sep);
} op_t;
#endif
