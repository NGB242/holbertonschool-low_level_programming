#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Affichebles resultats
* Description: program that prints the alphabet in lowercas
*Return: Always 0 (success)
*/
int main(void)

{
char low;
for (low = 'a'; low <= 'z'; low++)
{
putchar(low);
}
putchar('\n');
return (0);
}
