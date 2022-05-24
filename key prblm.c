#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,a[100],rem,i=0,count=0;
	printf("enter a number\n");
	scanf("%d",&n);
	int num=n;
	
	while(n!=1)
	{
		rem=n%2;
		n=n/2;
		if(rem==1)
		{
			count++;
		}
	}
	count = count+1;
	printf("the key %d is decoded as %d\n",num,count);
	
}
