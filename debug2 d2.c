#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
	int *ptr=(int *)malloc(sizeof(int));
	ptr=5;
	int *aptr=(int *)calloc(10, sizeof(int));
	for(i=0;i<10;i++)
	scanf("%d", aptr+i);
	for(i=0;i<10;i++)
	printf("%d", *(aptr+i));
	return 0;
}
