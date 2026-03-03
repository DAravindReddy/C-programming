
#include<stdio.h>
int str_len(char *str)
{
	int count= 0;
	int i = 0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}

int main()
{
	char str[] = "Hello";
	int len = str_len(str);
	printf("%d\n", len);
	return 0;
}
