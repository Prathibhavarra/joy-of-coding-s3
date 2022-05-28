#include<stdio.h>
#include<stdlib.h>
typedef struct book
{
	int book_id;
	char book_name[30];
	char book_auther[30];
	float book_price;
}bk;
void push(bk box,int *top,bk stack[]);
void pop(int *top,bk stack[]);
void display(int top,bk stack[]);
void main()
{
	int i=1,ch,top=-1;
	bk box,stack[4];
	printf("enter book id,book name,auther,price\n");
	
	for(;;)
	{
		printf("enter\n1.push\n2.pop\n3.display\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: if(top==5)
					{
						printf("box is full\n");
						exit(0);
					}
					else
					{
						printf("enter details of book %d: ",i++);
						scanf("%d %s %s %f",&box.book_id, box.book_name,box.book_auther,&box. book_price);
						push(box,&top,stack);
						printf("element pushed\n");
					}
					break;
					
			case 2: if(top==-1)
					{
						printf("box is empty\n");
						exit(0);
					}
					else
					{
						--i;
						pop(&top,stack);
					}
					break;
					
			case 3: if(top==-1)
					{
						printf("box is empty\n");
						exit(0);
					}
					else
					{
						display(top,stack);
					}
					break;
			}
		}
}
void push(bk box,int *top,bk stack[])
{
	stack[++(*top)]=box;
}
void pop(int *top,bk stack[])
{
	bk del;
	del=stack[(*top)--];
	printf("book removed\n");
	
}
void display(int top,bk stack[])
{
	int i;
	printf("the details are\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n %s\n %s\n %f\n",stack[i].book_id, stack[i].book_name,stack[i].book_auther,stack[i].book_price);
	}
}
