#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name from a function pointer
 * @name: char string.
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	char name;
	printf("name");
	scanf("%s", &name);
	printf("name:%s\n", name);
	return (0);
}
