#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Affiche les resultats
*Description:program that prints the alphabet in lowercase
*Return:Always 0 (success)
*/
int main(void)
{char low, e, q;
e = 'e';
q = 'q';
for (low = 'a'; low <= 'z'; low++)
if (low != e && low != q)
{
putchar(low);
}
{putchar('\n');
}
return (0);
}
