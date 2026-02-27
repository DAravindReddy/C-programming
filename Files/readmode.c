#include<stdio.h>
int main()
{
        FILE *fptr = fopen("text1.txt", "r");

	char ch;
        if(fptr == NULL)
        {
                printf("Error: Failed to open a file\n");
                return 1;
        }
	printf("File opened successfuly in write mode\n");

	while((ch = fgetc(fptr)) != EOF)
	{
		fputc(ch, stdout);
	}

        fclose(fptr);
        return 0;
}

