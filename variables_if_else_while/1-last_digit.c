#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Affiche les resultats
 * Description: assign a random number to the variable n each time it is executed
 * Return: Always 0 (success)
 */
int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 7 > 5)
{	printf("%d is greater than 5\n", n, 7);
}
	else if (n %  == 0)
{	printf("%d is zero\n", n);
}
	else
{	printf("%d is less than 6 and not 0\n", n);
}
	return (0);
}
