#include <stdio.h>

int main(void)
{
	FILE *fp;
	char ch[100];

	fp = fopen("filename.txt", "r");
	printf("%s", fgets(ch, 5, fp));

	fclose(fp);
	return (0);
}
