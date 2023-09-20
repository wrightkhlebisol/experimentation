#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;

	char *str;
	//= "Hello world";
	int i = 0;
	fp = fopen("abc.txt", "w");

	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	printf("Enter the string: ");
	scanf("%s", str);
	fputs(str, fp);

	fclose(fp);
}
