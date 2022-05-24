#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct details
{
	int age;
	float sal;
	char name[100];
}st ;
int main ()
{
    st s1={21,24.5,"wa"};
	st sd;
	sd.age=12;
	strcpy(sd.name,"asd");
	sd.sal=34.5;
	return 0;
}
