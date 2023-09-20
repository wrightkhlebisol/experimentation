#include <stdarg.h>
#include <stdio.h>

int add(int args, ...)
{
	va_list ap;

	va_start(ap, args);
	
	int i, sum = 0;
	for (i = 0; i < args; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return sum;
}

int main(void)
{
	printf("Add1 = %d\n", add(3,1,2,3));
	printf("Add2 = %d\n", add(6,20,20,20,10,10,20));
	return (0);
}
