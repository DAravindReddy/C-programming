
#include<stdio.h>
int main()
{
        FILE *fptr = fopen("text1.txt", "w");

        
        if(fptr == NULL)
        {
                printf("Error: Failed to open a file\n");
                return 1;
        }
        printf("File opened successfuly in write mode\n");

        fprintf(fptr, "Welcome to write operation\n");

        fclose(fptr);
        return 0;
}

