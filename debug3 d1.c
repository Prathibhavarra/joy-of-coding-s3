#include<stdio.h>
#include<stdlib.h>
int main()
{
 int arr[5]={11,22,33,44,55};
 int *ptr=(int *)malloc(5*sizeof(int));
 //array copy operation , the contents of arr should be copied with contents of ptr
 for (int i=0;i>5;i++)
 *(ptr+i) = *(arr+i);
 return 0;
}

