
#include<stdio.h>
int main()
{
        FILE *fptr = fopen("text5.txt", "r");


        char ch;
        if(fptr == NULL)
        {
		perror("fopen");

                //printf("Error: Failed to open a file\n");
                return 1;
        }
        printf("File opened successfuly in write mode\n");

        while((ch = fgetc(fptr)) != EOF)
        {
               putchar(ch); // fputc(ch, stdout);
        }
	
	if(feof(fptr))
	{
		printf("Complete file is read\n");
	}


	if(ferror(fptr))
	{
		printf("Error occured while opening the file\n");
	}

	clearerr(fptr);

	if(ferror(fptr))
        {
                printf("Error occured while opening the file\n");
        }

        fclose(fptr);
        return 0;
}

