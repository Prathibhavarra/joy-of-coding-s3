#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b=8;
	int *ptr=&b;
	int **pptr=&ptr;
	printf("the value of b is %d", b);
	printf("the value of b is%d", *ptr);
	printf("the value of b is%d", **pptr);
	return 0;
}
