#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	FILE *fp;
	char *ch;

	fp = fopen("abc.txt", "r");
	if (fp == NULL)
	{
		printf("error");
		exit(1);
	}

	fgets(ch, 50, fp);
	printf("%s", ch);

	fclose(fp);
}
