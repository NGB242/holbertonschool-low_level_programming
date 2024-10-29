#include "main.h"
#include <stdio.h>

/**
*_isupper -  Vérifie le code
*Description: @c check the code
*Return: 1 if c is uppercase 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	return (0);
}
