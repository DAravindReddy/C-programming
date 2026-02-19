
#include<stdio.h>

int main()
{
	int num = 7;
	int res = num & 1;
	if(res == 0)
		printf("Even\n");
	else
		printf("odd\n");
	return 0;
}
