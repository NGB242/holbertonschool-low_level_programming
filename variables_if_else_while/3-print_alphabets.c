#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Affiche les resultats
 * Description: program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
{	putchar(low);
}
	for (low = 'A'; low <= 'z'; low++)
{	putchar(low);
}
{	putchar('\n');
}
	return (0);
}
