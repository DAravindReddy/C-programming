
#include<stdio.h>

int main()
{
	int num = 10;
	int pos = 2;
	int n = 3;

	int mask = (((1<<n)-1) << pos);
	int res = num | mask;
	printf("Res = %d\n", res);
	return 0;
}
