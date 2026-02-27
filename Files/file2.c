
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
        
	printf("Write content from the file: ");
	
	
	//fprintf(fptr, "Hello world!\n");

        //fprintf(fptr, "Welcome to file handling\n");


	 while((ch = fgetc(fptr)) != EOF)
        {
                printf("%c", ch);
        }

	fclose(fptr);
	/*
	if(ferror(fptr))
	{
		fprintf(stderr, "Error in readfing from file: file txt\n");
	}
	clearerr(fptr);

	if(ferror(fptr))
		fprintf(stderr, "Error in reading from a file\n");
	*/
        

        return 0;
}

