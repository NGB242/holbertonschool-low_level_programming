#include "main.h"
#include <stdio.h>
/**
 * char *_memset - a function that fills memory with a constant byte
 * @s: location to fill
 * @b: char to fill
 * @b: char to fill location 
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{	
	char *start = s;
	
	while(n--)
	{	
		*s = b;
		s++;
	}
	return (start);
}
