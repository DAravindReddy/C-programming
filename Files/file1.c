
#include<stdio.h>

int main()
{
	FILE *fptr = fopen("text1.txt", "r");
	char ch;
	if(fptr == NULL)
	{
		printf("Error: failed to open a file\n");
		return 1;
	}
	printf("File opened successfully in read only mode\n");
	printf("content in file: ");
	while((ch = fgetc(fptr)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fptr);

	return 0;
}
