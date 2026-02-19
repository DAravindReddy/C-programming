
#include<stdio.h>

int main()
{
	int num = 10;
	for(int i = 7; i >= 0; i--)
	{
		if(num & (1<<i) )
		{
			printf("1");

		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	return 0;
}
