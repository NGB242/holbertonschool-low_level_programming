#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Affiche les resultats
*Description:
*Return:Always 0 (success)
*/
	int main(void)
{
	char low;
	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
