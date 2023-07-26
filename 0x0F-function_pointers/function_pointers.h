<<<<<<< HEAD
#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

=======
#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_

#include <stddef.h>

int _putchar(char c);
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
