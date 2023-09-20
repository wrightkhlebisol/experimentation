#include <stdio.h>

int main(void)
{
	char a[7] = "School";

	printf("%s\n", a);
	printf("Value of the last char of a: %d\n", a[6]);
	printf("Value of a: %p\n", a);
	printf("Value of \"School\": %p\n", "School");
	return (0);
}
