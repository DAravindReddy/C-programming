
#include<string.h>
#include<stdio.h>

int main()
{
	char str[] = "Hello world! Good morning all";
	char substr[] = "Good";
	char *ptr = strstr(str, substr);
	if(!ptr)
		printf("Found\n");
	else
		printf("Not found\n");
	return 0;
}
	
