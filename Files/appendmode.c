
#include<stdio.h>
int main()
{
        FILE *fptr = fopen("text1.txt", "a");

        char ch;
        if(fptr == NULL)
        {
                printf("Error: Failed to open a file\n");
                return 1;
        }
        printf("File opened successfuly in write mode\n");

        fprintf(fptr, "Hello welcome to append mode\n");

        fclose(fptr);
        return 0;
}

