#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char st[100],vow[100],con[100];
	int i=0,j=0,k=0,len=0;
	printf("enter a sentence\n");
	
	scanf("%[^\n]s",st);
	
		printf("the string is: %s\n",st);
	
	
	while(st[i] != '\0')
	{
		len++;
		i++;
	}
	
	for(i=0;i<len-1;i++)
	{
		if((st[i] == 'a')||(st[i] == 'e')||(st[i] == 'i')||(st[i] == 'o')||(st[i] == 'u')||(st[i] == 'A')||(st[i] == 'E')||(st[i] == 'I')||(st[i] == 'O')||(st[i] == 'U'))
		{
			vow[j]=st[i];
			j++;
		}
		else
		{
			con[k]=st[i];
			k++;
		}
	}
	vow[j]='\0';
	con[k]='\0';
	
	printf("the vowels are:\n");
	    printf("%s",vow);
	printf("\n");
	printf("the consonents are:\n");
	      printf("%s",con);
		
}



