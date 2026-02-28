#include<string.h>
#include<stdio.h>

int main()
{
    char str[] = "Welcome to string tocken";
    char *tocken = str;
    tocken = strtok(str, " ");
    while(tocken)
    {
        printf("%s\n", tocken);
        tocken = strtok(NULL, " ");
    }
    return 0;
}