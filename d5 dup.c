#include<stdio.h>
#include<stdlib.h>
void delete(int a[],int j,int *n)
{
	int i=a[j];
	for(i=j+1;i<(*n);i++)
	{
		a[i-1]=a[i];
	}
	(*n)= (*n)-1;
}	
void main()
{
	int a[100],i,j,n;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter the elements into array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
				for(j=i+1;j<n;j++)
				{
					if(a[i]==a[j])
					{
						delete(a,j,&n);
					}
				}
		}
}
