#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a =20;
	float b=20.2;
	int *ptr =&a;
	printf("the value of a is %d", *ptr);
	float *pt=&b;
	printf("the value of b is %f", *pt);
	return 0;
}
