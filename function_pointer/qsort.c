#include <stdio.h>
#include <stdlib.h>

/**
 * qsort - sorts num of elements of the array pointed to based on:
 * @base: pointer to the first object of array to be sorted, converted to void*
 * @num: number of elements in array pointed t by base
 * @size: size in bytes of each elemnt in array
 * @compar:pointer to a function that compares two elements
 */

/**
 * void qsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));
 */

int values[] = {40, 10, 100, 90, 20, 25};
int compare (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}

int main()
{
	int n;
	qsort (values, 6, sizeof(int), compare);
	for (n = 0; n < 6; n++)
		printf("%d", values[n]);
	return (0);
}
