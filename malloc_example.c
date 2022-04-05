#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';
	printf("%s\n", str);

	return (0);
}
/**
 * in the above malloc has been used to crea a 3 byte
 * allocated space in memory, and we fill this space with
 * characters
 * @sizeof: allocate s3 times the size of a char(which
 * happens to be 3 times 1 byte on 64-bit machine)
 * Always use sizeof for better portability
 */
