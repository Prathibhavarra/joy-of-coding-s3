#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,r,c,a[100][100];
	printf("enter row and col\n");
	scanf("%d %d",&r,&c);
	printf("enter elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("the required matrix is\n");
	for(i=c-1;i>=0;i--)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
