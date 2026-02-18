
#include<stdio.h>
int main()
{
	int x = 10, y = 20, z = 0;
	int res = (x = ((y+z) && 0));
	printf("%d\n", res);
	return 0;
}
