#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int count,len,max=0;
    char st[100],letter,key;
    printf("enter a string\n");
    scanf("%[^\n]s",st);
   int i=0,arr=0,j;
    while(st[i] != '\0')
    {
        len++;
        i++;
    }
    
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=i;j<len;j++)
        {
            if(st[i]==st[j])
            count++;
        }
        if(max<count)
        {
            max=count;
            letter=st[i];
        }
        
    }
    printf("the max apha is %c repeated %d times",letter,max);
}
    
