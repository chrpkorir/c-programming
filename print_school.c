#include <stdio.h>

/**
 * print_school - prints "Faith"
 *
 * Return: nothing
 */
void print_school(void)
{
	char str[] = "Faith";

	str[0] = 's';
	printf("%s\n", str);
}

/**
 * main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
	print_school();
	return (0);
}
