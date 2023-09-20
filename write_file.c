#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	// Process the file
	fprintf(fp, "%s", "Hello world");

	fclose(fp);
	return (0);
}
