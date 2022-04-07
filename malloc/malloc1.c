#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	char *ar;

	n = 5; 
	ar = malloc(sizeof(char) * n);
	ar[0] = 'C';
	ar[1] = 'o';
	ar[2] = 'o';
	ar[3] = 'l';
	ar[4] = '\0';
	printf("%s\n", ar);
	return (0);
}
