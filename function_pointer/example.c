#include <stdio.h>

/**
 * fun - a normal function with an int parameter
 * and void return type
 * *fun_ptr - a pointer to function fun()
 *
 */
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

int main ()
{
	void (*fun_ptr)(int) = &fun;
	/**
	 * The above line is equivalent of following two
	 * void (*fun_ptr)(int);
	 * fun_ptr = &fun;
	 */
	(*fun_ptr)(10); // Invoking fun() usin fun_ptr
	return (0);
	/**
	 * An extra bracket is required around function pointers
	 * like fun_ptr because if we remove the brackets then the
	 * expression "void *(fun_ptr)(int)" becomes 
	 * "void *fun_ptr(int)" which is a declaration of a
	 * function that returns void pointer
	 */
}
