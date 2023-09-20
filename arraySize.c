#include <stdio.h>

int main(void)
{
	int array[10];
	char alph[10];
	float fl[10];
	double db[10];

	printf("sizeof int array * 10: %lu\n", sizeof array);
	printf("sizeof char array * 10: %lu\n", sizeof alph);
	printf("sizeof float array * 10: %lu\n", sizeof fl);
	printf("sizeof double array * 10: %lu\n", sizeof db);
	return (0);
}
