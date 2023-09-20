#include <stdio.h>

void add(int a, int b)
{
	printf("Addition: %d\n", a + b);
}

void subtract(int a, int b)
{
	printf("Subtraction: %d\n", a - b);
}

void multiply(int a, int b)
{
	printf("mult: %d\n", a * b);
}

int main()
{
	void (*func_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 15, b = 10;

	printf("Enter Choice: 0 for add, 1 for subtract and 2 for multiply\n");
	scanf("%d", &ch);

	if (ch > 2 || ch < 0) return 0;

	(*func_ptr_arr[ch])(a, b);

	return 0;
}
