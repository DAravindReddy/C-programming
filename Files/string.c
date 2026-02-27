
#include<string.h>
#include<stdio.h>

int main()
{
	FILE* fp = fopen("string.txt", "r");
	if(fp == NULL)
	{
		perror("fopen");
		return 1;
	}

	char str[100];

	fgets(str,sizeof(str), fp);

	//str[strcspn(str,"\n")] = '\0';


	printf("Output : %s String length: %ld\n", str, strlen(str));
	

	fclose(fp);
	return 0;
}
