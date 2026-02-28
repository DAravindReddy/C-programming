
#include<stdio.h>

int main()
{
	int num = 10;
	int n = 2;
	int mask = (1 << n);
        int res = num | mask;

	printf("%d\n", res);

	return 0;
}	
