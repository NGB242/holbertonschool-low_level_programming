#include <stdio.h>
#include "main.h"
/**
 * main - program that prints _putchar, followed by a new line.
 * declaration: this program prints "_putchar" followed by a new line.
 * return: The program should return 0

 */

int main(void)
{
const char *str  = "_putchar";
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
return (0);
}
