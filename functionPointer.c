#include <stdio.h>
#include <stdlib.h>

void func(int);

main()
{
	/*Declare a function pointer*/
	void (*fp)(int);

	/*Assign address of func address*/
	fp = func;

	(*fp)(1);
	fp(2);

	exit(EXIT_SUCCESS);
}

void func(int arg)
{
	printf("%d\n", arg);
}
