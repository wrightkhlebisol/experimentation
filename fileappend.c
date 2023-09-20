#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("abc.txt", "r+");

	fgets();

	fclose(fp);
}
