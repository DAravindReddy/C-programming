/*
 * post increment and pre increment
 */
#include<stdio.h>

int main()
{
	int x = 10;
	int y = ++x; //pre increment here returns updated value
	int a = 10;
	int b = a++; //post increment here returns previous value
	printf("%d ", x);
	printf("%d", y);
	printf("\n%d %d\n", a, b);
	return 0;
}
