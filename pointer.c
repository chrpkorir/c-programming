#include <stdio.h>

int main()
{
	int a;
	int *p;
	a = 10;
	p = &a; // &a address of a
	printf("%d\n", a);
	*p = 15; // derefencing
	printf("a = %d\n", a);
}
