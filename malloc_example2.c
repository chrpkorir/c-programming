#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc
 *
 * Return: 0
 */
int main(void)
{
	int *tab;

	tab = malloc(sizeof(*tab) * 3);
	tab[0] = 98;
	tab[1] = -1024;
	tab[2] = 402;
	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
	return (0);
}

/** in the above example malloc is used to create space in memory
 * by using sizeof instead of directly a number of bytes
 * we are sure get the right amount of memory, no matter what 
 * system we are compiling
 */
