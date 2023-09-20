#include <stdarg.h>
#include <stdio.h>

int multi(int argCount, ...)
{
	va_list _vaArgs;
	int i, mult = 1;
	va_start(_vaArgs, argCount);
	
	for (i = 0; i < argCount; i++)
	{
		mult *= va_arg(_vaArgs, int);
	}
	
	va_end(_vaArgs);
	return mult;
}

int main(void)
{
	printf("%d", multi(1000, 3, 2, 10, 10, 10));
	return (0);
}
