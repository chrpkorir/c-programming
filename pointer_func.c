#include <stdio.h>
#include <stdlib.h>

/**
 * Add - print sum of 2 int
 * @a: pointer to int
 * @b: pointer to int
 * Return: sum
 */
int Add(int* a, int* b)
{
	int c = (*a) + (*b);
	return (c);
}

/**
 * main - calls function add by reference
 */
int main()
{
	int x = 2;
	int y = 4;

	int z = Add(&x, &y);
	printf("Sum = %d\n", z);
}
