
#include<stdio.h>

char *my_strcpy(char *dest, const char *src)
{
	char *temp = dest;
	while(*src != '\0')
	{
		*dest++ = *src++;
	}
	 
	return temp;
}
int main()
{
	char *str1 = "hello";
	char str2[100];

	my_strcpy(str2, str1);

	printf("%s\n", str2);
	return 0;
}
