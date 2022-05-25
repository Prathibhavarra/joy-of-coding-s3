#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,pbits;
    printf("enter no of elements\n");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("the elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
     
    printf("enter no of pbits to be shifted\n");
    scanf("%d",&pbits);
    
    for(i=pbits;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    
     for(i=0;i<pbits;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    
    
    
}
