
#include<stdio.h>

int main()
{
	int num = 10;
	int n = 3;
	int mask = ((1 << n) - 1);
	int res = num & ~mask;
	printf("Res: %d\n", res);
	return 0;
}
