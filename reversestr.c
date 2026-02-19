
#include<string.h>
#include<stdio.h>
void revstr(char *str, int i, int j)
{
	while(i < j)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}



int main()
{
	char str[] = "Hello";
	int i = 0;
	int j = strlen(str)-1;
	revstr(str, i, j);
	printf("%s\n", str);
	return 0;
}

