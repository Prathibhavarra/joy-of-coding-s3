#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,a[100],temp,n;
	printf("enter no of elements\n");
		scanf("%d",&n);
	printf("enter numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("the sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("the  2 largest elements are\n");
	printf("%d and %d\n",a[n-2],a[n-1]);
}
