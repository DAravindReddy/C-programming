
#include<string.h>
#include<stdio.h>

char *mystrcat(char *str1, const char *str2)
{
	int i = 0;
	int j = strlen(str1);


	while(str1[i] == '\0' || str2[i] != '\0')
	{
		str1[j] = str2[i];
		j++;
		i++;
	}
	str1[j] = '\0';
	return str1;
}
int main()
{
	char str1[] = "Good";
	char str2[] = "Morning";
	mystrcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}

