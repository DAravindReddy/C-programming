#include<stdio.h>

int main()
{
	int age;
	float weight;
	FILE *fptr = fopen("scanf.txt", "r");
	if(fptr == NULL)
	{
		perror("fopen");
		printf("failed to open a file\n");
		return 1;
	}
	fscanf(fptr, "%d %f", &age, &weight);
	printf("Age: %d, Weight: %f\n", age, weight);
	fclose(fptr);
	return 0;
}
