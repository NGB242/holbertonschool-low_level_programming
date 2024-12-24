#include "main.h"
#include <stdio.h>

/**
 * main - ENTRY to test a function that multiplies two integers.
 *
 * Return: Always 0.
 */
int main(void)
{
printf("%d * %d: %d\n", 98, 1024, mul(98, 1024));
printf("%d * %d: %d\n", -402, 4096, mul(-402, 4096));
return (0);
}
