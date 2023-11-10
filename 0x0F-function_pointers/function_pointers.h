#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);
void print_name(char *name, void (*f)(char *));
#endif /* FUNCTION_POINTERS_H */

