#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[100],i,j,n,sum,key,start,end,k;
	printf("enter no of ele\n");
	scanf("%d",&n);
	printf("enter  elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the  elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	printf("enter key\n");
	scanf("%d",&key);
	
			
			for(i=0;i<n;i++)
			{
				start=i;
				if(a[i]==key)
				{
					printf("the sub array is %d\n",key);
					printf("indices range from %d to %d\n",i,i);
					exit(0);
				}
				
				for(j=i+1,sum=a[i];j<n;j++)
				{
					end=j;
					sum=sum+a[j];
					if(sum>key)
					{
						break;
					}
					else if(sum==key)
					{
						printf("the sub array is\t");
						for(k=i;k<=j;k++)
						{
							printf("%d\t",a[k]);
						}
						printf("\n");
						printf("indices range from %d to %d\n",start,end);
						exit(0);
					}
					
				}
			}
			printf("not possible to obtain sum\n");
}
