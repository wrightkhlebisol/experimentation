#include <stdio.h>

void f(int *a);

int main(void)
{
	int *p;
	int t[10];

	p = t; /* Auto implicit conversion to (int *) - Array Type Decay */
	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);
	f(t);	
	return (0);
}

void f(int *a)
{
	printf("a: %p\n", a);
	return;
}
