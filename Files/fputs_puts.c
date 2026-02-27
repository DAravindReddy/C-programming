

#include<string.h>
#include<stdio.h>

int main()
{
        FILE* fp = fopen("string.txt", "w");
        if(fp == NULL)
        {
                perror("fopen");
                return 1;
        }

	fputs("Welcome to Votary\n", fp);
	puts("welcome to terminal");
	
        fclose(fp);
        return 0;
}

